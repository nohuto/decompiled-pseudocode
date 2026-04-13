/*
 * XREFs of ?RuntimeClassInitialize@CDelayedTask@ComTaskPool@Internal@Windows@@QEAAJW4TaskApartment@34@W4TaskOptions@34@KKPEAUIComPoolTask@34@@Z @ 0x1800046A4
 * Callers:
 *     ??$MakeAndInitialize@VCDelayedTask@ComTaskPool@Internal@Windows@@V1234@AEAW4TaskApartment@34@AEAW4TaskOptions@34@AEAKAEAKAEAPEAUIComPoolTask@34@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@@012@AEAW4TaskApartment@Internal@Windows@@AEAW4TaskOptions@56@AEAK3AEAPEAUIComPoolTask@56@@Z @ 0x1800138D4 (--$MakeAndInitialize@VCDelayedTask@ComTaskPool@Internal@Windows@@V1234@AEAW4TaskApartment@34@AEA.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F68C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CDelayedTask::RuntimeClassInitialize(
        void *a1,
        int a2,
        int a3,
        int a4,
        DWORD DueTime,
        __int64 a6)
{
  _DWORD *v10; // rax
  _DWORD *v11; // rdi
  signed int v12; // ebx
  __int64 v13; // rcx
  signed int LastError; // eax
  __int64 v15; // rcx

  v10 = operator new(0x20uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v11 = v10;
  if ( v10 )
  {
    *v10 = a2;
    v10[1] = a3;
    v10[2] = a4;
    *((_QWORD *)v10 + 2) = a6;
    if ( a6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a6 + 8LL))(a6);
    *((_QWORD *)v11 + 3) = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  *((_QWORD *)a1 + 3) = v11;
  v12 = v11 == 0LL ? 0x8007000E : 0;
  if ( v11 )
  {
    if ( *((void **)a1 + 4) != a1 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)a1 + 8LL))(a1);
      v13 = *((_QWORD *)a1 + 4);
      *((_QWORD *)a1 + 4) = a1;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( CreateTimerQueueTimer(
           (PHANDLE)a1 + 2,
           0LL,
           Windows::Internal::ComTaskPool::CDelayedTask::s_TPWake,
           a1,
           DueTime,
           0,
           8u) )
    {
      return 0;
    }
    else
    {
      LastError = GetLastError();
      v12 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v12 = LastError;
      if ( v12 >= 0 )
        v12 = -2147467259;
      v15 = *((_QWORD *)a1 + 4);
      if ( v15 )
      {
        *((_QWORD *)a1 + 4) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  return (unsigned int)v12;
}
