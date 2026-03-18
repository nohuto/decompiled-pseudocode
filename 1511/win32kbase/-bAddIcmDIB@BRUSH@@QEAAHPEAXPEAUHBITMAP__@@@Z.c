/*
 * XREFs of ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00B2E80
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00320A0 (HmgIncrementShareReferenceCount.c)
 *     HmgShareLockCheck @ 0x1C0049310 (HmgShareLockCheck.c)
 *     ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1C00B2F40 (-hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z.c)
 */

__int64 __fastcall BRUSH::bAddIcmDIB(BRUSH *this, void *a2, HBITMAP a3)
{
  unsigned int v6; // edi
  _DWORD *v8; // rbx
  _QWORD *v9; // rsi

  v6 = 0;
  if ( BRUSH::hFindIcmDIB(this, a2) )
    return 0LL;
  v8 = (_DWORD *)HmgShareLockCheck((int)a3, 5);
  if ( v8 )
  {
    v9 = PALLOCMEM2(0x18uLL, 1818518087LL, 0);
    if ( v9 )
    {
      HmgIncrementShareReferenceCount(v8);
      ++v8[40];
      *v9 = a2;
      v9[1] = a3;
      v9[2] = *((_QWORD *)this + 12);
      KeAcquireGuardedMutex(ghfmMemory);
      *((_QWORD *)this + 12) = v9;
      KeReleaseGuardedMutex(ghfmMemory);
      v6 = 1;
    }
    HmgDecrementShareReferenceCount(v8);
  }
  return v6;
}
