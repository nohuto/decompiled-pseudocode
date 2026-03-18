/*
 * XREFs of ?FindPointerInFrame@@YAHPEBUtagPOINTERINPUTFRAME@@IPEAK@Z @ 0x1C01F7AD8
 * Callers:
 *     ?GetPointerHistoryFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@KIIPEAE1@Z @ 0x1C01F8974 (-GetPointerHistoryFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@KIIPEAE1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindPointerInFrame(const struct tagPOINTERINPUTFRAME *a1, int a2, unsigned int *a3)
{
  __int64 v3; // r11
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  __int64 v6; // rbx
  _DWORD *v7; // rax
  bool v8; // cf
  _DWORD *v9; // rax

  v3 = *a3;
  v4 = *((_DWORD *)a1 + 6);
  v5 = *a3;
  v6 = *((_QWORD *)a1 + 9);
  if ( (unsigned int)v3 < v4 )
  {
    v7 = (_DWORD *)(v6 + 216 * v3 + 60);
    do
    {
      if ( *v7 == a2 )
        break;
      ++v5;
      v7 += 54;
    }
    while ( v5 < v4 );
  }
  v8 = v5 < v4;
  if ( v5 == v4 )
  {
    v5 = 0;
    if ( (_DWORD)v3 )
    {
      v9 = (_DWORD *)(v6 + 60);
      do
      {
        if ( *v9 == a2 )
          break;
        ++v5;
        v9 += 54;
      }
      while ( v5 < (unsigned int)v3 );
    }
    v8 = v5 < v4;
  }
  if ( !v8 || *(unsigned __int16 *)(216LL * v5 + v6 + 60) != a2 )
    return 0LL;
  *a3 = v5;
  return 1LL;
}
