/*
 * XREFs of ?Start@CCrossProcessControl@@UEAAJXZ @ 0x14003A8F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AEWMILOG_CONTROL@@YAXKPEAXE_K@Z @ 0x1400395E0 (-AEWMILOG_CONTROL@@YAXKPEAXE_K@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x14003A3E0 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x14003C52C (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 */

__int64 __fastcall CCrossProcessControl::Start(CCrossProcessControl *this)
{
  int v2; // ebx
  CCrossProcessBaseEndpoint *v3; // rax
  int v4; // ebx
  __int64 v5; // rcx

  EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 56LL) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 72LL))(*((_QWORD *)this + 1));
    if ( v2 >= 0 )
    {
      AERTLockZoneHeap(*(void **)(*((_QWORD *)this + 1) + 112LL));
      v3 = (CCrossProcessBaseEndpoint *)*((_QWORD *)this + 1);
      v4 = *(_DWORD *)(*((_QWORD *)v3 + 8) + 156LL);
      if ( CCrossProcessBaseEndpoint::IsValidFlags(v3, v4) )
      {
        if ( (v4 & 1) != 0 )
        {
          v2 = -2005139434;
        }
        else
        {
          WaitForSingleObject(*(HANDLE *)(*((_QWORD *)this + 1) + 120LL), 0x3E8u);
          v2 = 0;
          v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 64LL);
          _InterlockedOr((volatile signed __int32 *)(v5 + 156), 1u);
          _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 136LL), 1);
          AEWMILOG_CONTROL(v5, this, 6u);
        }
      }
      else
      {
        v2 = -2005139387;
      }
    }
  }
  else
  {
    v2 = -2005139437;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( v2 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, (__int64)&WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids, v2);
  }
  return (unsigned int)v2;
}
