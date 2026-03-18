/*
 * XREFs of ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1C00939A0
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00948DC (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C012F574 (-Stop@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1C0150EB4 (-Destroy@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 * Callees:
 *     Template_ppqqpqq @ 0x1C0011B4C (Template_ppqqpqq.c)
 *     Template_ppqqpt @ 0x1C0011C10 (Template_ppqqpt.c)
 *     Template_ppqqpx @ 0x1C0011CC4 (Template_ppqqpx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::Stop(DXGADAPTERSYNCOBJECT *this)
{
  __int64 v2; // r8
  DXGADAPTERSYNCOBJECT *v3; // rdx
  __int64 v4; // r9
  __int64 v5; // rax
  __int128 v6; // [rsp+50h] [rbp+7h]
  __int128 v7; // [rsp+90h] [rbp+47h]

  if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 4, 0LL, *((_QWORD *)this + 4)) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL) + 8LL) + 528LL))();
    v3 = *((_BYTE *)this + 26)
       ? (DXGADAPTERSYNCOBJECT *)*((_QWORD *)this + 7)
       : (DXGADAPTERSYNCOBJECT *)((char *)this - 240);
    if ( bTracingEnabled )
    {
      v6 = *(_OWORD *)((char *)v3 + 152);
      v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v7 = *(_OWORD *)((char *)v3 + 216);
      switch ( (_DWORD)v6 )
      {
        case 1:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_ppqqpt(
              DWORD2(v7),
              &EventDestroySynchronizationMutex,
              v2,
              v4,
              v3,
              1,
              DWORD1(v6),
              DWORD2(v7),
              DWORD2(v6));
          break;
        case 2:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_ppqqpqq(
              DWORD2(v7),
              &EventDestroySemaphore,
              v2,
              v4,
              v3,
              1,
              DWORD1(v6),
              DWORD2(v7),
              DWORD2(v6),
              HIDWORD(v6));
          break;
        case 3:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_ppqqpx(DWORD2(v7), &EventDestroyFence, v2, v4, v3, 1, DWORD1(v6), DWORD2(v7), *((_QWORD *)&v6 + 1));
          break;
        case 4:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_ppqqpx(
              DWORD2(v7),
              &EventDestroyCPUNotification,
              v2,
              v4,
              v3,
              1,
              DWORD1(v6),
              DWORD2(v7),
              *((_QWORD *)&v6 + 1));
          break;
        case 5:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_ppqqpx(
              DWORD2(v7),
              &EventDestroyMonitoredFence,
              v2,
              v4,
              v3,
              1,
              DWORD1(v6),
              DWORD2(v7),
              *((_QWORD *)&v6 + 1));
          break;
        default:
          v5 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 4));
          *(_QWORD *)(v5 + 24) = 864LL;
          WdLogEvent5_WdAssertion(v5);
          break;
      }
    }
  }
}
