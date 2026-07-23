/*
 * XREFs of KsepGetShimCallbacksForDriver @ 0x1405151DC
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x14051525C (KseShimDriverIoCallbacks.c)
 * Callees:
 *     KsepLogInfo @ 0x14010B3D0 (KsepLogInfo.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KsepDebugPrint @ 0x1401DCA68 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1401DCCD0 (KsepLogError.c)
 *     RtlAssert @ 0x140213284 (RtlAssert.c)
 *     KsepIsModuleShimmed @ 0x140515050 (KsepIsModuleShimmed.c)
 */

__int64 __fastcall KsepGetShimCallbacksForDriver(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v6; // rcx
  char v7; // al
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rcx
  char v14; // al
  _DWORD *v15; // rax
  __int64 v16; // r13
  __int64 v17; // rbp
  _DWORD *v18; // rsi
  int v19; // r12d
  __int64 v20; // rdi
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  char v25; // al
  char v26; // al
  char v27; // al
  __int64 v28; // [rsp+20h] [rbp-48h]
  int v29; // [rsp+78h] [rbp+10h]
  __int64 v30; // [rsp+80h] [rbp+18h]
  __int64 v31; // [rsp+88h] [rbp+20h] BYREF

  v2 = 0;
  v31 = 0LL;
  if ( !a2 )
  {
    v6 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v7 = KsepDebugFlag;
    dword_140307464[2 * v6] = -1073740768;
    KsepHistoryErrors[2 * v6] = 459505;
    if ( (v7 & 4) != 0 )
      RtlAssert("IoCallbacks != NULL", "minkernel\\ntos\\kshim\\kseloader.c", 0x2F1u, 0LL);
  }
  memset(a2, 0, 0x100uLL);
  if ( !(unsigned int)KsepIsModuleShimmed((__int64)&KseEngine, a1, &v31) )
    return (unsigned int)-1073741275;
  v8 = *(_DWORD *)(v31 + 24);
  v9 = *(_QWORD *)(v31 + 32);
  if ( v8 )
  {
    v10 = v9 + 72;
    v30 = *(unsigned int *)(v31 + 24);
    v28 = v9 + 72;
    v11 = v8;
    while ( 1 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v10 + 28LL) & 4) == 0 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)v10 + 16LL);
        if ( !v12 )
        {
          v13 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          v14 = KsepDebugFlag;
          dword_140307464[2 * v13] = -1073740768;
          KsepHistoryErrors[2 * v13] = 459558;
          if ( (v14 & 4) != 0 )
          {
            RtlAssert("CurrentShim != NULL", "minkernel\\ntos\\kshim\\kseloader.c", 0x326u, 0LL);
            v11 = v30;
          }
        }
        v15 = *(_DWORD **)(v12 + 48);
        LODWORD(v16) = 0;
        v29 = 0;
        if ( *v15 != 4 )
          break;
      }
LABEL_48:
      v10 = v28 + 80;
      --v11;
      v28 += 80LL;
      v30 = v11;
      if ( !v11 )
        goto LABEL_49;
    }
    v17 = 0LL;
    while ( 1 )
    {
      if ( v15[v17] == 3 )
      {
        v18 = *(_DWORD **)&v15[v17 + 4];
        v19 = 0;
        if ( *v18 != 2 )
          break;
      }
LABEL_46:
      v15 = *(_DWORD **)(v12 + 48);
      v16 = (unsigned int)(v16 + 1);
      v29 = v16;
      v17 = 6 * v16;
      if ( v15[6 * v16] == 4 )
      {
        v11 = v30;
        goto LABEL_48;
      }
    }
    v20 = 0LL;
    while ( 1 )
    {
      v21 = v18[v20 + 2];
      if ( v21 == 1 )
      {
        if ( *a2 )
        {
          v23 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          KsepHistoryErrors[2 * v23] = 459586;
          goto LABEL_40;
        }
        *a2 = *(_QWORD *)&v18[v20 + 4];
      }
      else
      {
        switch ( v18[v20 + 2] )
        {
          case 2:
            if ( a2[1] )
            {
              v23 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
              KsepHistoryErrors[2 * v23] = 459601;
              goto LABEL_40;
            }
            a2[1] = *(_QWORD *)&v18[v20 + 4];
            break;
          case 3:
            if ( a2[2] )
            {
              v23 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
              KsepHistoryErrors[2 * v23] = 459616;
              goto LABEL_40;
            }
            a2[2] = *(_QWORD *)&v18[v20 + 4];
            break;
          case 4:
            if ( a2[3] )
            {
              v23 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
              KsepHistoryErrors[2 * v23] = 459631;
              goto LABEL_40;
            }
            a2[3] = *(_QWORD *)&v18[v20 + 4];
            break;
          default:
            if ( (unsigned int)(v21 - 100) > 0x1B )
            {
              v24 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
              v25 = KsepDebugFlag;
              dword_140307464[2 * v24] = -1073741811;
              KsepHistoryErrors[2 * v24] = 459662;
              if ( (v25 & 2) != 0 )
                KsepDebugPrint(9LL, "KSE: Invalid callback code encountered: %u\n", v18[v20 + 2]);
              KsepLogError(9, "KSE: Invalid callback code encountered: %u\n", v18[v20 + 2]);
              break;
            }
            v22 = (unsigned int)(v21 - 100);
            if ( a2[v22 + 4] )
            {
              v23 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
              KsepHistoryErrors[2 * v23] = 459649;
LABEL_40:
              v26 = KsepDebugFlag;
              dword_140307464[2 * v23] = -1073741823;
              if ( (v26 & 2) != 0 )
                KsepDebugPrint(9LL, "KSE: Two shims are hooking same callback! \n");
              KsepLogError(9, "KSE: Two shims are hooking same callback! \n");
              break;
            }
            a2[v22 + 4] = *(_QWORD *)&v18[v20 + 4];
            break;
        }
      }
      v20 = 8LL * (unsigned int)++v19;
      v18 = *(_DWORD **)(*(_QWORD *)(v12 + 48) + v17 * 4 + 16);
      if ( v18[v20] == 2 )
      {
        LODWORD(v16) = v29;
        goto LABEL_46;
      }
    }
  }
LABEL_49:
  v27 = KsepDebugFlag;
  KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 459682LL;
  if ( (v27 & 1) != 0 )
    KsepDebugPrint(9LL, "KSE: GetShimCallbacks succeeded\n");
  KsepLogInfo(9LL, (__int64)"KSE: GetShimCallbacks succeeded\n");
  return v2;
}
