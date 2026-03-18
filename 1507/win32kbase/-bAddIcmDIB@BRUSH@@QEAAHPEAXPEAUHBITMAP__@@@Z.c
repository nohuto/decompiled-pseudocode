/*
 * XREFs of ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00AF0D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003A914 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C003A938 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     HmgIncrementShareReferenceCount @ 0x1C005E740 (HmgIncrementShareReferenceCount.c)
 *     ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1C00AF1A0 (-hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z.c)
 */

__int64 __fastcall BRUSH::bAddIcmDIB(BRUSH *this, void *a2, HSURF a3)
{
  unsigned int v6; // ebx
  _QWORD *v8; // rdi
  int *v9; // rbx
  _BYTE v10[32]; // [rsp+20h] [rbp-38h] BYREF
  int *v11; // [rsp+40h] [rbp-18h]

  v6 = 0;
  if ( BRUSH::hFindIcmDIB(this, a2) )
    return 0LL;
  SURFREF::SURFREF((SURFREF *)v10, a3);
  if ( v11 )
  {
    v8 = PALLOCMEM2(0x18uLL, 1818518087LL, 0);
    if ( v8 )
    {
      v9 = v11;
      HmgIncrementShareReferenceCount(v11);
      ++v9[40];
      *v8 = a2;
      v8[1] = a3;
      v8[2] = *((_QWORD *)this + 12);
      KeAcquireGuardedMutex(ghfmMemory);
      *((_QWORD *)this + 12) = v8;
      KeReleaseGuardedMutex(ghfmMemory);
      v6 = 1;
    }
  }
  SURFREF::~SURFREF((SURFREF *)v10);
  return v6;
}
