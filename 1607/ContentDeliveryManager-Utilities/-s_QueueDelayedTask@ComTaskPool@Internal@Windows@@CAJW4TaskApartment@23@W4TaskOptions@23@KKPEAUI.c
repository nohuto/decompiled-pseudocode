/*
 * XREFs of ?s_QueueDelayedTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180004618
 * Callers:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x18000401C (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 * Callees:
 *     ??$Make@VCDelayedTaskLifetime@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCDelayedTaskLifetime@ComTaskPool@Internal@Windows@@@12@XZ @ 0x18000DF34 (--$Make@VCDelayedTaskLifetime@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@YA-AV-$ComPt.c)
 *     ??$MakeAndInitialize@VCDelayedTask@ComTaskPool@Internal@Windows@@V1234@AEAW4TaskApartment@34@AEAW4TaskOptions@34@AEAKAEAKAEAPEAUIComPoolTask@34@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@@012@AEAW4TaskApartment@Internal@Windows@@AEAW4TaskOptions@56@AEAK3AEAPEAUIComPoolTask@56@@Z @ 0x18000DFBC (--$MakeAndInitialize@VCDelayedTask@ComTaskPool@Internal@Windows@@V1234@AEAW4TaskApartment@34@AEA.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::s_QueueDelayedTask(
        int a1,
        int a2,
        int a3,
        int a4,
        char a5,
        _QWORD *a6)
{
  _QWORD *v6; // rsi
  __int64 v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // edi
  unsigned int v11; // eax
  _QWORD *v12; // rdx
  _QWORD *v13; // r14
  __int64 v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+30h] BYREF
  int v18; // [rsp+78h] [rbp+38h] BYREF
  int v19; // [rsp+80h] [rbp+40h] BYREF
  int v20; // [rsp+88h] [rbp+48h] BYREF

  v20 = a4;
  v19 = a3;
  v18 = a2;
  v17 = a1;
  v6 = a6;
  if ( a6 )
    *a6 = 0LL;
  v7 = 0LL;
  if ( !v6 )
    goto LABEL_9;
  v8 = (__int64 *)Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CDelayedTaskLifetime>(&v16);
  if ( &a6 != (_QWORD **)v8 )
  {
    v7 = *v8;
    *v8 = 0LL;
  }
  v9 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = v7 == 0 ? 0x8007000E : 0;
  if ( v7 )
  {
LABEL_9:
    a6 = 0LL;
    v11 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComTaskPool::CDelayedTask,Windows::Internal::ComTaskPool::CDelayedTask,enum Windows::Internal::TaskApartment &,enum Windows::Internal::TaskOptions &,unsigned long &,unsigned long &,Windows::Internal::IComPoolTask * &>(
            (unsigned int)&a6,
            (unsigned int)&v17,
            (unsigned int)&v18,
            (unsigned int)&v19,
            (__int64)&v20,
            (__int64)&a5);
    v12 = a6;
    v10 = v11;
    if ( v7 )
    {
      if ( *(_QWORD **)(v7 + 16) != a6 )
      {
        v13 = a6;
        if ( a6 )
        {
          (*(void (__fastcall **)(_QWORD *))(*a6 + 8LL))(a6);
          v12 = a6;
        }
        v14 = *(_QWORD *)(v7 + 16);
        *(_QWORD *)(v7 + 16) = v13;
        if ( v14 )
        {
          (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v14 + 16LL))(v14, v12);
          v12 = a6;
        }
      }
      *v6 = v7;
    }
    if ( v12 )
    {
      a6 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
    }
  }
  return v10;
}
