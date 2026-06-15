/*
 * XREFs of AudioDGGetVpoFromVpoContext @ 0x140032390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?FindKey@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEBAHAEBK@Z @ 0x140032024 (-FindKey@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@Q.c)
 */

__int64 __fastcall AudioDGGetVpoFromVpoContext(__int64 a1, int a2, __int64 a3, unsigned int a4, _QWORD *a5)
{
  int Key; // eax
  __int64 v8; // rdi
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+38h] [rbp-8h] BYREF
  int v17; // [rsp+68h] [rbp+28h] BYREF

  v17 = a2;
  v15 = 0LL;
  v16 = 0LL;
  Key = ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::FindKey(
          a1,
          &v17);
  if ( Key == -1 )
    return (unsigned int)-2147023728;
  if ( Key < 0 || Key >= dword_140054F90 )
  {
    RaiseException(0xC000008C, 1u, 0, 0LL);
    __debugbreak();
  }
  v8 = *((_QWORD *)qword_140054F88 + Key);
  if ( !v8 )
  {
    return (unsigned int)-2147023728;
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v8 + 72) + 16LL) + 24LL))(
           *(_QWORD *)(v8 + 72) + 16LL,
           a4,
           &v16);
    if ( v9 < 0
      || ((v10 = *(_QWORD *)(v8 + 64)) == 0
        ? (v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v16 + 24LL))(v16, 0LL, &v15))
        : (v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v10 + 80LL))(
                   v10,
                   a3,
                   a4,
                   v16,
                   &v15)),
          v9 = v11,
          v11 < 0) )
    {
      v13 = v15;
    }
    else
    {
      v12 = v15;
      v13 = 0LL;
      v15 = 0LL;
      *a5 = v12;
    }
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v13 = v15;
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return (unsigned int)v9;
}
