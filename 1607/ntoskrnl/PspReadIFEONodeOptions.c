/*
 * XREFs of PspReadIFEONodeOptions @ 0x140472344
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x140472194 (RtlQueryImageFileKeyOption.c)
 */

int __fastcall PspReadIFEONodeOptions(__int64 a1, void *a2, __int64 *a3)
{
  __int64 v5; // rax
  ULONG v7; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v5) = RtlQueryImageFileKeyOption(a2, L"NodeOptions", 4, &v7, 4u, 0LL);
  if ( (int)v5 >= 0 )
  {
    LODWORD(v5) = v7;
    if ( (_BYTE)v7 )
    {
      if ( (unsigned __int8)v7 == 1 && v7 >> 8 < (unsigned __int16)KeNumberNodes && !*a3 )
      {
        v5 = KeNodeBlock[(unsigned __int64)v7 >> 8];
        if ( *(_QWORD *)(v5 + 136) )
          *a3 = v5;
      }
    }
    else if ( (v7 & 0xFFFFFF00) != 0 )
    {
      *(_DWORD *)(a1 + 768) |= 0x100000u;
    }
  }
  return v5;
}
