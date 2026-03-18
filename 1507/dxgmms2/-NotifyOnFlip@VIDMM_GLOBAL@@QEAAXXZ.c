/*
 * XREFs of ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C000F108
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C0016460 (VidSchiExecuteMmIoFlip.c)
 * Callees:
 *     Template_q @ 0x1C0007190 (Template_q.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyOnFlip(VIDMM_GLOBAL *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  REGHANDLE EtwHandle; // rax
  bool v5; // zf
  int v6; // eax

  if ( *((_QWORD *)this + 974) <= (unsigned __int64)qword_1C0027258 )
  {
    v6 = *((_DWORD *)this + 1950);
    if ( v6 )
      *((_DWORD *)this + 1950) = v6 - 1;
  }
  else
  {
    *((_DWORD *)this + 1950) += dword_1C0027264;
    if ( *((_DWORD *)this + 1950) > (unsigned int)dword_1C0027260
      && MEMORY[0xFFFFF78000000014] - *((_QWORD *)this + 976) > (unsigned __int64)qword_1C0027268 )
    {
      if ( (unsigned __int8)WdDiagIsTracingEnabled(&Dxgk_ExcessiveMemoryTransfer) )
      {
        EtwHandle = WdDiagGetEtwHandle();
        if ( EtwHandle )
          EtwWrite(EtwHandle, &Dxgk_ExcessiveMemoryTransfer, 0LL, 0, 0LL);
      }
      v5 = bTracingEnabled == 0;
      *((_QWORD *)this + 976) = MEMORY[0xFFFFF78000000014];
      *((_DWORD *)this + 1950) = 0;
      if ( !v5 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v2, &EventPerformanceWarning, v3, 5);
    }
  }
  _InterlockedExchange64((volatile __int64 *)this + 974, 0LL);
}
