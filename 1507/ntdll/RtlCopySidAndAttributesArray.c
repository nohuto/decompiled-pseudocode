/*
 * XREFs of RtlCopySidAndAttributesArray @ 0x1800CE7B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopySid @ 0x18004E900 (RtlCopySid.c)
 */

NTSTATUS __cdecl RtlCopySidAndAttributesArray(
        ULONG Count,
        PSID_AND_ATTRIBUTES Src,
        ULONG SidAreaSize,
        PSID_AND_ATTRIBUTES Dest,
        PSID SidArea,
        PSID *RemainingSidArea,
        PULONG RemainingSidAreaSize)
{
  ULONG v8; // r15d
  DWORD *p_Attributes; // rdi
  signed __int64 v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // r14d

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
      *p_Attributes = *(DWORD *)((char *)p_Attributes + v12);
      RtlCopySid(v14, SidArea, *(PSID *)((char *)p_Attributes + v12 - 8));
      ++v8;
      SidArea = (char *)SidArea + v15;
      p_Attributes += 4;
      if ( v8 >= Count )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    *RemainingSidArea = SidArea;
    *RemainingSidAreaSize = SidAreaSize;
    return 0;
  }
}
