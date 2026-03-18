/*
 * XREFs of RtlCopySidAndAttributesArray @ 0x14040EE50
 * Callers:
 *     SepCreateTokenEx @ 0x14007FBC8 (SepCreateTokenEx.c)
 *     NtQueryInformationToken @ 0x14040F810 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x140439FF0 (SeQueryInformationToken.c)
 *     SepFilterToken @ 0x14047AFF4 (SepFilterToken.c)
 *     SepCopyTokenAccessInformation @ 0x1404A05F8 (SepCopyTokenAccessInformation.c)
 *     CmpBuildAdminInformation @ 0x14060049C (CmpBuildAdminInformation.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 */

NTSTATUS __stdcall RtlCopySidAndAttributesArray(
        ULONG Count,
        PSID_AND_ATTRIBUTES Src,
        ULONG SidAreaSize,
        PSID_AND_ATTRIBUTES Dest,
        PSID SidArea,
        PSID *RemainingSidArea,
        PULONG RemainingSidAreaSize)
{
  ULONG v8; // ebp
  ULONG *p_Attributes; // rbx
  signed __int64 v12; // r12
  __int64 v13; // rax
  ULONG v14; // ecx
  unsigned int v15; // esi
  unsigned __int8 *v16; // rdx
  unsigned int v17; // eax

  v8 = 0;
  if ( Count )
  {
    p_Attributes = &Dest->Attributes;
    v12 = (char *)Src - (char *)Dest;
    while ( 1 )
    {
      v13 = *(_QWORD *)((char *)p_Attributes + v12 - 8);
      v14 = 4 * *(unsigned __int8 *)(v13 + 1) + 8;
      v15 = (4 * *(unsigned __int8 *)(v13 + 1) + 11) & 0xFFFFFFFC;
      if ( v14 > SidAreaSize )
        return -1073741789;
      *((_QWORD *)p_Attributes - 1) = SidArea;
      SidAreaSize -= v15;
      *p_Attributes = *(ULONG *)((char *)p_Attributes + v12);
      v16 = *(unsigned __int8 **)((char *)p_Attributes + v12 - 8);
      v17 = 4 * v16[1] + 8;
      if ( v17 <= v14 )
        memmove(SidArea, v16, v17);
      ++v8;
      SidArea = (char *)SidArea + v15;
      p_Attributes += 4;
      if ( v8 >= Count )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    *RemainingSidArea = SidArea;
    *RemainingSidAreaSize = SidAreaSize;
    return 0;
  }
}
