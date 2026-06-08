/*
 * XREFs of RegisterHvPackage @ 0x1C001C780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     GetHvPackage @ 0x1C001BBD8 (GetHvPackage.c)
 */

__int64 __fastcall RegisterHvPackage(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // r8
  _DWORD *HvPackage; // rdx
  __int64 **v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // r8
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = HvlQueryProcessorTopology(*(unsigned int *)(a1 + 60), 0LL, &v9, 0LL);
  if ( v2 >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C000D9C8,
      0LL);
    v3 = qword_1C000D9F8;
    if ( (__int64 *)qword_1C000D9F8 == &qword_1C000D9F8 )
      goto LABEL_6;
    do
    {
      HvPackage = (_DWORD *)v3;
      if ( *(_DWORD *)(v3 + 32) == v9 )
        break;
      v3 = *(_QWORD *)v3;
      HvPackage = 0LL;
    }
    while ( (__int64 *)v3 != &qword_1C000D9F8 );
    if ( !HvPackage )
    {
LABEL_6:
      HvPackage = GetHvPackage(v9);
      if ( !HvPackage )
      {
LABEL_13:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C000D9C8);
        return (unsigned int)v2;
      }
      v5 = (__int64 **)qword_1C000DA00;
      *(_QWORD *)HvPackage = &qword_1C000D9F8;
      *((_QWORD *)HvPackage + 1) = v5;
      if ( *v5 != &qword_1C000D9F8 )
        __fastfail(3u);
      *v5 = (__int64 *)HvPackage;
      qword_1C000DA00 = (__int64)HvPackage;
    }
    *(_QWORD *)(a1 + 1016) = HvPackage;
    ++HvPackage[51];
    v6 = a1 + 1024;
    v7 = (_QWORD *)*((_QWORD *)HvPackage + 3);
    *(_QWORD *)(a1 + 1024) = HvPackage + 4;
    *(_QWORD *)(a1 + 1032) = v7;
    if ( (_DWORD *)*v7 != HvPackage + 4 )
      __fastfail(3u);
    *v7 = v6;
    *((_QWORD *)HvPackage + 3) = v6;
    v2 = HvPackage[50] != HvPackage[51] ? 0x103 : 0;
    goto LABEL_13;
  }
  return (unsigned int)v2;
}
