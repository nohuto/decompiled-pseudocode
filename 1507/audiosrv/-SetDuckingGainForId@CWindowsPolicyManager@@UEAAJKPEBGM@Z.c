/*
 * XREFs of ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x180021BB0
 * Callers:
 *     ?SetUserDuckingPreference@CDuckingManager@@UEAAXKK@Z @ 0x18000DCA0 (-SetUserDuckingPreference@CDuckingManager@@UEAAXKK@Z.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180028950 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z @ 0x1800686B8 (--_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::SetDuckingGainForId(
        CWindowsPolicyManager *this,
        int a2,
        const unsigned __int16 *a3,
        float a4)
{
  CConnectorFormatCharacteristics *v4; // r15
  HANDLE ProcessHeap; // rax
  unsigned __int128 v8; // rax
  CConnectorFormatCharacteristics *v9; // r14
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  signed int v12; // esi
  HANDLE v13; // rax
  _QWORD *v14; // rdi
  HANDLE v15; // rcx
  unsigned __int16 **v17; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v18; // [rsp+28h] [rbp-50h]
  unsigned int v19; // [rsp+30h] [rbp-48h]

  v4 = 0LL;
  ProcessHeap = GetProcessHeap();
  *(_QWORD *)&v8 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
  v9 = (CConnectorFormatCharacteristics *)v8;
  if ( (_QWORD)v8 )
  {
    *(_QWORD *)v8 = 0LL;
    *(float *)(v8 + 12) = a4;
    *(_DWORD *)(v8 + 8) = a2;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
    goto LABEL_22;
  v10 = -1LL;
  do
    ++v10;
  while ( a3[v10] );
  v11 = v10 + 1;
  *(_QWORD *)v9 = 0LL;
  if ( v10 + 1 < v10 )
  {
    v12 = -2147024362;
    goto LABEL_25;
  }
  *(_QWORD *)v9 = 0LL;
  v8 = v11 * (unsigned __int128)2uLL;
  if ( is_mul_ok(v11, 2uLL) )
  {
    *(_QWORD *)&v8 = CoTaskMemAlloc(2 * v11);
    *(_QWORD *)v9 = v8;
    if ( (_QWORD)v8 )
    {
      v12 = 0;
      StringCchCopyNExW((unsigned __int16 *)v8, v10 + 1, a3, v10, v17, v18, v19);
      goto LABEL_10;
    }
LABEL_22:
    v12 = -2147024882;
    goto LABEL_25;
  }
  v12 = -2147024362;
LABEL_10:
  if ( v12 >= 0 )
  {
    v4 = v9;
    goto LABEL_12;
  }
LABEL_25:
  if ( v9 )
    CConnectorFormatCharacteristics::`scalar deleting destructor'(v9, DWORD2(v8));
LABEL_12:
  if ( v12 < 0 )
  {
LABEL_33:
    if ( v4 )
      CConnectorFormatCharacteristics::`scalar deleting destructor'(v4, DWORD2(v8));
    return (unsigned int)v12;
  }
  v13 = GetProcessHeap();
  *(_QWORD *)&v8 = HeapAlloc(v13, 0, 0x18uLL);
  v14 = (_QWORD *)v8;
  if ( (_QWORD)v8 )
  {
    *(_QWORD *)v8 = &CGenericApplicationManagerWorkItem<DuckingGainValueChangedContext>::`vftable';
    _InterlockedIncrement((volatile signed __int32 *)g_ApplicationManager + 2);
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v14 )
  {
    v12 = -2147024882;
    goto LABEL_31;
  }
  v15 = g_WorkerEventPort;
  v14[1] = CApplicationManager::HandleDuckingIdGainChanged;
  v14[2] = v4;
  if ( PostQueuedCompletionStatus(v15, 0, (ULONG_PTR)v14, 0LL) )
  {
    v12 = 0;
    goto LABEL_18;
  }
  LODWORD(v8) = GetLastError();
  v12 = v8;
  if ( (int)v8 > 0 )
    v12 = (unsigned __int16)v8 | 0x80070000;
  if ( v12 < 0 )
  {
LABEL_31:
    if ( v14 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v14 + 8LL))(v14, 1LL);
LABEL_18:
    if ( v12 >= 0 )
      return (unsigned int)v12;
    goto LABEL_33;
  }
  return (unsigned int)v12;
}
