/*
 * XREFs of ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C000FAFC
 * Callers:
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0023EB0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyOnFlip(VIDMM_GLOBAL *this)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // r8
  bool v5; // zf
  REGHANDLE EtwHandle; // rax

  if ( *((_QWORD *)this + 980) > (unsigned __int64)qword_1C0035288 )
  {
    *((_DWORD *)this + 1962) += dword_1C0035294;
    if ( *((_DWORD *)this + 1962) > (unsigned int)dword_1C0035290
      && MEMORY[0xFFFFF78000000014] - *((_QWORD *)this + 982) > (unsigned __int64)qword_1C0035298 )
    {
      if ( (unsigned __int8)WdDiagIsTracingEnabled(&Dxgk_ExcessiveMemoryTransfer) )
      {
        EtwHandle = WdDiagGetEtwHandle();
        if ( EtwHandle )
          EtwWrite(EtwHandle, &Dxgk_ExcessiveMemoryTransfer, 0LL, 0, 0LL);
      }
      v5 = bTracingEnabled == 0;
      *((_QWORD *)this + 982) = MEMORY[0xFFFFF78000000014];
      *((_DWORD *)this + 1962) = 0;
      if ( !v5 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v3, &EventPerformanceWarning, v4, 5LL);
    }
  }
  else
  {
    v2 = *((_DWORD *)this + 1962);
    if ( v2 )
      *((_DWORD *)this + 1962) = v2 - 1;
  }
  _InterlockedExchange64((volatile __int64 *)this + 980, 0LL);
}
