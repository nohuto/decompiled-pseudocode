/*
 * XREFs of ?ReportNewEnergyUsage@HistoricalEnergyTracker@@QEAAJK@Z @ 0x180052EAC
 * Callers:
 *     ?OnEnergyConsumedInternal@AppEnergyInformation@@IEAAJKH@Z @ 0x180051F8C (-OnEnergyConsumedInternal@AppEnergyInformation@@IEAAJKH@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800531B0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall HistoricalEnergyTracker::ReportNewEnergyUsage(HistoricalEnergyTracker *this, int a2)
{
  unsigned int v3; // esi
  int v5; // r15d
  int TickCount; // r12d
  char *v7; // r14
  __int64 *v8; // rax
  __int64 *v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rax
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  v5 = 0;
  TickCount = AppEnergyUsageManager::s_pfnGetTickCount(AppEnergyUsageManager::s_pfnGetTickCount);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v7 = (char *)this + 8;
  while ( *(char **)v7 != v7 )
  {
    v8 = *(__int64 **)v7;
    if ( TickCount - *(_DWORD *)(*(_QWORD *)v7 + 20LL) <= AppEnergyUsageManager::s_dwHistoricalTimeInterval )
      break;
    *((_DWORD *)this + 1) -= *((unsigned __int8 *)v8 + 16);
    v9 = v8;
    v10 = (_QWORD *)v8[1];
    v11 = *v8;
    *v10 = v11;
    *(_QWORD *)(v11 + 8) = v10;
    operator delete(v9);
    --*((_QWORD *)this + 3);
  }
  if ( a2 )
  {
    while ( 1 )
    {
      v12 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v12 )
      {
        v12[2] = 0LL;
        v13 = (_QWORD *)*((_QWORD *)this + 2);
        v12[1] = v13;
        *v12 = v7;
        *v13 = v12;
        *((_QWORD *)this + 2) = v12;
        ++*((_QWORD *)this + 3);
      }
      else
      {
        v12 = 0LL;
      }
      if ( !v12 )
        break;
      *(_DWORD *)(*((_QWORD *)this + 2) + 20LL) = TickCount;
      v14 = *((_QWORD *)this + 2);
      if ( (unsigned int)(a2 - v5) <= 0xFF )
        *(_BYTE *)(v14 + 16) = a2 - v5;
      else
        *(_BYTE *)(v14 + 16) = -1;
      v5 += *(unsigned __int8 *)(*((_QWORD *)this + 2) + 16LL);
      if ( v5 == a2 )
      {
        *((_DWORD *)this + 1) += a2;
        *(_DWORD *)this += a2;
        goto LABEL_15;
      }
    }
    v3 = -2147024882;
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)0x682,
      (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)0x8007000ELL,
      v16);
  }
LABEL_15:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  return v3;
}
