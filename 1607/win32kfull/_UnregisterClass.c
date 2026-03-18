/*
 * XREFs of _UnregisterClass @ 0x1C0071F88
 * Callers:
 *     NtUserUnregisterClass @ 0x1C0109FB0 (NtUserUnregisterClass.c)
 * Callees:
 *     _InnerGetClassPtr @ 0x1C007215C (_InnerGetClassPtr.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     DestroyClass @ 0x1C008FB6C (DestroyClass.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00A0A68 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall UnregisterClass(unsigned __int16 *a1, __int64 a2, _QWORD *a3)
{
  int v6; // r14d
  unsigned __int16 v7; // r11
  __int64 ClassPtr; // r8
  __int64 v9; // r10
  unsigned __int16 v10; // r11
  __int64 v11; // rcx
  _BYTE v13[56]; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v13);
  if ( ((unsigned __int64)a1 & 0xFFFFFFFFFFFF0000uLL) != 0
    && (int)RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, a1) >= 0 )
  {
    UserFindAtom(&gawchAtomScratch);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v13);
  ClassPtr = InnerGetClassPtr(v7, *(_QWORD *)(gptiCurrent + 376LL) + 312LL, a2);
  if ( !ClassPtr )
  {
    ClassPtr = InnerGetClassPtr(v10, v9 + 320, 0LL);
    if ( !ClassPtr )
    {
      v11 = 1411LL;
LABEL_7:
      UserSetLastError(v11);
      return 0LL;
    }
    v6 = 1;
  }
  if ( *(_DWORD *)(*(_QWORD *)ClassPtr + 80LL) )
  {
    v11 = 1412LL;
    goto LABEL_7;
  }
  *a3 = *(_QWORD *)(*(_QWORD *)ClassPtr + 40LL);
  a3[1] = *(_QWORD *)(*(_QWORD *)ClassPtr + 48LL);
  a3[2] = 0LL;
  if ( v6 )
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) &= ~0x2000u;
  DestroyClass(*(struct tagPROCESSINFO **)(gptiCurrent + 376LL));
  return 1LL;
}
