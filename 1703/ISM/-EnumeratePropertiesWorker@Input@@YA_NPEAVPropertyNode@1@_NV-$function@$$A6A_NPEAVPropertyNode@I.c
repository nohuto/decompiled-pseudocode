/*
 * XREFs of ?EnumeratePropertiesWorker@Input@@YA_NPEAVPropertyNode@1@_NV?$function@$$A6A_NPEAVPropertyNode@Input@@PEAXK@Z@std@@PEAXK@Z @ 0x1800288DC
 * Callers:
 *     ?GetHMonitors@DisplayBinding@@UEBAJPEAPEAPEAUHMONITOR__@@PEAI@Z @ 0x18001C0D0 (-GetHMonitors@DisplayBinding@@UEBAJPEAPEAPEAUHMONITOR__@@PEAI@Z.c)
 *     ?EnumeratePropertiesWorker@Input@@YA_NPEAVPropertyNode@1@_NV?$function@$$A6A_NPEAVPropertyNode@Input@@PEAXK@Z@std@@PEAXK@Z @ 0x1800288DC (-EnumeratePropertiesWorker@Input@@YA_NPEAVPropertyNode@1@_NV-$function@$$A6A_NPEAVPropertyNode@I.c)
 * Callees:
 *     ?EnumeratePropertiesWorker@Input@@YA_NPEAVPropertyNode@1@_NV?$function@$$A6A_NPEAVPropertyNode@Input@@PEAXK@Z@std@@PEAXK@Z @ 0x1800288DC (-EnumeratePropertiesWorker@Input@@YA_NPEAVPropertyNode@1@_NV-$function@$$A6A_NPEAVPropertyNode@I.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall Input::EnumeratePropertiesWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  char v7; // si
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 (__fastcall ***v10)(_QWORD, _BYTE *); // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // [rsp+38h] [rbp-21h] BYREF
  __int64 v15; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v17[56]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v18; // [rsp+90h] [rbp+37h]
  int v19; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v20; // [rsp+C8h] [rbp+6Fh]
  __int64 v21; // [rsp+D0h] [rbp+77h]

  v21 = a4;
  v20 = a3;
  v16[1] = -2LL;
  v7 = 1;
  v19 = a5;
  v15 = a4;
  v16[0] = a1;
  v8 = *(_QWORD *)(a3 + 56);
  if ( !v8 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  LOBYTE(v19) = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *, int *))(*(_QWORD *)v8 + 16LL))(
                  v8,
                  v16,
                  &v15,
                  &v19);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 72LL))(a1, &v14);
  v15 = v9;
  if ( v9 )
  {
    while ( v7 )
    {
      v16[0] = v17;
      v18 = 0LL;
      v10 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a3 + 56);
      if ( v10 )
        v18 = (**v10)(v10, v17);
      LOBYTE(v19) = Input::EnumeratePropertiesWorker(v14, 0, (unsigned int)v17, v21, a5 + 1);
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 80LL))(a1, v15, &v14);
    }
    v9 = v15;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 88LL))(a1, v9);
  v12 = *(_QWORD *)(a3 + 56);
  if ( v12 )
  {
    LOBYTE(v11) = v12 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v11);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return v19;
}
