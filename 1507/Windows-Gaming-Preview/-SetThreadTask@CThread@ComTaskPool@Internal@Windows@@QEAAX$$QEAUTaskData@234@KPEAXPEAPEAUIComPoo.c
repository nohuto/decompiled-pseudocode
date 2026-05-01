/*
 * XREFs of ?SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoolTask@34@@Z @ 0x18001049C
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x18000FE14 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 *     ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x180010588 (-s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

DWORD __fastcall Windows::Internal::ComTaskPool::CThread::SetThreadTask(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rsi
  DWORD v11; // ebx
  DWORD result; // eax

  if ( a5 )
  {
    v8 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 144) = 0LL;
    *a5 = v8;
  }
  *(_DWORD *)(a1 + 128) = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 8);
  v9 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  v10 = *(_QWORD *)(a1 + 144);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL))(*(_QWORD *)(a1 + 144));
  *(_QWORD *)(a1 + 144) = v9;
  v11 = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 160) = a3;
  *(_QWORD *)(a1 + 40) = a4;
  *(_BYTE *)(a1 + 97) = 0;
  result = GetCurrentThreadId();
  if ( result != v11 && v11 )
  {
    if ( *(_BYTE *)(a1 + 120) )
      return SetEvent(*(HANDLE *)(a1 + 112));
    else
      return PostThreadMessageW(v11, 0, 0LL, 0LL);
  }
  return result;
}
