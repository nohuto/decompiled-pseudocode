/*
 * XREFs of ViCheckMdlLength @ 0x140708CF0
 * Callers:
 *     VfBuildScatterGatherList @ 0x1407068C0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140706B9C (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x140707628 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140707964 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140707CF0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140707E98 (VfMapTransferEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViCheckMdlLength(__int64 *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 *v3; // r9
  unsigned __int64 v5; // rax
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // ecx

  v3 = a1;
  if ( !a3 )
    return 0LL;
  if ( a1 )
  {
    do
    {
      v5 = *((unsigned int *)v3 + 10);
      if ( a2 <= v5 )
        break;
      v3 = (__int64 *)*v3;
      a2 -= v5;
    }
    while ( v3 );
    while ( v3 && a3 )
    {
      v6 = *((_DWORD *)v3 + 10);
      v7 = a3;
      v3 = (__int64 *)*v3;
      v8 = v6 - a2;
      if ( v8 < a3 )
        v7 = v8;
      a3 -= v7;
      LODWORD(a2) = 0;
    }
  }
  return a3;
}
