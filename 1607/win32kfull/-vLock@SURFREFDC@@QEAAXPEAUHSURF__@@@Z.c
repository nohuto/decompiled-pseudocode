/*
 * XREFs of ?vLock@SURFREFDC@@QEAAXPEAUHSURF__@@@Z @ 0x1C003A96C
 * Callers:
 *     GreDrawStream @ 0x1C0039BA8 (GreDrawStream.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFREFDC::vLock(SURFREFDC *this, HSURF a2)
{
  HSURF v3; // rcx
  struct SURFACE *v4; // rax
  __int64 v5; // rbx

  v3 = a2;
  LOBYTE(a2) = 5;
  v4 = (struct SURFACE *)HmgShareLockCheck(v3, a2);
  *((_QWORD *)this + 4) = v4;
  if ( v4 )
  {
    if ( v4 != SURFACE::pdibDefault )
    {
      GreAcquireHmgrSemaphore();
      v5 = *((_QWORD *)this + 4);
      INC_SHARE_REF_CNT(v5);
      ++*(_DWORD *)(v5 + 160);
      DEC_SHARE_REF_CNT(*((_QWORD *)this + 4));
      GreReleaseHmgrSemaphore();
    }
  }
}
