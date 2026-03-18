/*
 * XREFs of ?bReset@DC@@QEAAHXZ @ 0x1C001D9FC
 * Callers:
 *     GreBeginGdiRenderingToDxSurface @ 0x1C0012E08 (GreBeginGdiRenderingToDxSurface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bReset(DC *this)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 29);
  if ( v1 )
  {
    v5 = *((_QWORD *)this + 29);
    --*(_DWORD *)(v1 + 32);
    if ( !*(_DWORD *)(v5 + 32) )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v5);
    *((_QWORD *)this + 29) = 0LL;
    DC::vReleaseRao(this);
  }
  v3 = *((_QWORD *)this + 28);
  if ( v3 )
  {
    v5 = *((_QWORD *)this + 28);
    --*(_DWORD *)(v3 + 32);
    if ( !*(_DWORD *)(v5 + 32) )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v5);
    *((_QWORD *)this + 28) = 0LL;
    DC::vReleaseRao(this);
  }
  return 1LL;
}
