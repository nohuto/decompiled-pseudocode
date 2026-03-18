/*
 * XREFs of KsepGetShimCallbacksForDriver @ 0x140578AD0
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x140576E20 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     KsepLogInfo @ 0x140153D70 (KsepLogInfo.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KsepDebugPrint @ 0x14020C31C (KsepDebugPrint.c)
 *     KsepLogError @ 0x14020C584 (KsepLogError.c)
 *     RtlAssert @ 0x140248194 (RtlAssert.c)
 *     KsepIsModuleShimmed @ 0x1404535A8 (KsepIsModuleShimmed.c)
 */

__int64 __fastcall KsepGetShimCallbacksForDriver(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r9
  __int64 v7; // rcx
  char v8; // al
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rcx
  char v15; // al
  _DWORD *v16; // rax
  __int64 v17; // r13
  __int64 v18; // rbp
  _DWORD *v19; // rsi
  int v20; // r12d
  __int64 v21; // rdi
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  char v26; // al
  char v27; // al
  char v28; // al
  __int64 v29; // [rsp+20h] [rbp-48h]
  int v30; // [rsp+78h] [rbp+10h]
  __int64 v31; // [rsp+80h] [rbp+18h]
  __int64 v32; // [rsp+88h] [rbp+20h] BYREF

  v2 = 0;
  v32 = 0LL;
  if ( !a2 )
  {
    v7 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v8 = KsepDebugFlag;
    dword_140332304[2 * v7] = -1073740768;
    KsepHistoryErrors[2 * v7] = 459505;
    if ( (v8 & 4) != 0 )
      RtlAssert("IoCallbacks != NULL", "minkernel\\ntos\\kshim\\kseloader.c", 0x2F1u, 0LL);
  }
  memset(a2, 0, 0x100uLL);
  if ( !(unsigned int)KsepIsModuleShimmed((__int64)&KseEngine, a1, &v32, v5) )
    return (unsigned int)-1073741275;
  v9 = *(_DWORD *)(v32 + 24);
  v10 = *(_QWORD *)(v32 + 32);
  if ( v9 )
  {
    v11 = v10 + 72;
    v31 = *(unsigned int *)(v32 + 24);
    v29 = v10 + 72;
    v12 = v9;
    while ( 1 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v11 + 28LL) & 4) == 0 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)v11 + 16LL);
        if ( !v13 )
        {
          v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          v15 = KsepDebugFlag;
          dword_140332304[2 * v14] = -1073740768;
          KsepHistoryErrors[2 * v14] = 459558;
          if ( (v15 & 4) != 0 )
          {
            RtlAssert("CurrentShim != NULL", "minkernel\\ntos\\kshim\\kseloader.c", 0x326u, 0LL);
            v12 = v31;
          }
        }
        v16 = *(_DWORD **)(v13 + 48);
        LODWORD(v17) = 0;
        v30 = 0;
        if ( *v16 != 4 )
          break;
      }
LABEL_48:
      v11 = v29 + 80;
      --v12;
      v29 += 80LL;
      v31 = v12;
      if ( !v12 )
        goto LABEL_49;
    }
    v18 = 0LL;
    while ( 1 )
    {
      if ( v16[v18] == 3 )
      {
        v19 = *(_DWORD **)&v16[v18 + 4];
        v20 = 0;
        if ( *v19 != 2 )
          break;
      }
LABEL_46:
      v16 = *(_DWORD **)(v13 + 48);
      v17 = (unsigned int)(v17 + 1);
      v30 = v17;
      v18 = 6 * v17;
      if ( v16[6 * v17] == 4 )
      {
        v12 = v31;
        goto LABEL_48;
      }
    }
    v21 = 0LL;
    while ( 1 )
    {
      v22 = v19[v21 + 2];
      if ( v22 == 1 )
      {
        if ( *a2 )
        {
          v24 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          KsepHistoryErrors[2 * v24] = 459586;
          goto LABEL_40;
        }
        *a2 = *(_QWORD *)&v19[v21 + 4];
      }
      else
      {
        switch ( v19[v21 + 2] )
        {
          case 2:
            if ( a2[1] )
            {
              v24 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
              KsepHistoryErrors[2 * v24] = 459601;
              goto LABEL_40;
            }
            a2[1] = *(_QWORD *)&v19[v21 + 4];
            break;
          case 3:
            if ( a2[2] )
            {
              v24 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
              KsepHistoryErrors[2 * v24] = 459616;
              goto LABEL_40;
            }
            a2[2] = *(_QWORD *)&v19[v21 + 4];
            break;
          case 4:
            if ( a2[3] )
            {
              v24 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
              KsepHistoryErrors[2 * v24] = 459631;
              goto LABEL_40;
            }
            a2[3] = *(_QWORD *)&v19[v21 + 4];
            break;
          default:
            if ( (unsigned int)(v22 - 100) > 0x1B )
            {
              v25 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
              v26 = KsepDebugFlag;
              dword_140332304[2 * v25] = -1073741811;
              KsepHistoryErrors[2 * v25] = 459662;
              if ( (v26 & 2) != 0 )
                KsepDebugPrint(9LL, "KSE: Invalid callback code encountered: %u\n", v19[v21 + 2]);
              KsepLogError(9, "KSE: Invalid callback code encountered: %u\n", v19[v21 + 2]);
              break;
            }
            v23 = (unsigned int)(v22 - 100);
            if ( a2[v23 + 4] )
            {
              v24 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
              KsepHistoryErrors[2 * v24] = 459649;
LABEL_40:
              v27 = KsepDebugFlag;
              dword_140332304[2 * v24] = -1073741823;
              if ( (v27 & 2) != 0 )
                KsepDebugPrint(9LL, "KSE: Two shims are hooking same callback! \n");
              KsepLogError(9, "KSE: Two shims are hooking same callback! \n");
              break;
            }
            a2[v23 + 4] = *(_QWORD *)&v19[v21 + 4];
            break;
        }
      }
      v21 = 8LL * (unsigned int)++v20;
      v19 = *(_DWORD **)(*(_QWORD *)(v13 + 48) + v18 * 4 + 16);
      if ( v19[v21] == 2 )
      {
        LODWORD(v17) = v30;
        goto LABEL_46;
      }
    }
  }
LABEL_49:
  v28 = KsepDebugFlag;
  KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 459682LL;
  if ( (v28 & 1) != 0 )
    KsepDebugPrint(9LL, "KSE: GetShimCallbacks succeeded\n");
  KsepLogInfo(9LL, (__int64)"KSE: GetShimCallbacks succeeded\n");
  return v2;
}
