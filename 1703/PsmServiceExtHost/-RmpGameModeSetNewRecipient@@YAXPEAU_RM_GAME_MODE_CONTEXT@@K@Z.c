/*
 * XREFs of ?RmpGameModeSetNewRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18001A984
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001A550 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18001AA1C (-RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_C.c)
 *     ?RmpGameModePublishRecipientProcessId@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18001FBE0 (-RmpGameModePublishRecipientProcessId@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpGameModeAcquireAndApplyRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18003059C (-RmpGameModeAcquireAndApplyRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_R.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180030888 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeRemoveCurrentRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180030FCC (-RmpGameModeRemoveCurrentRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 */

void __fastcall RmpGameModeSetNewRecipient(struct _RM_GAME_MODE_CONTEXT *a1, unsigned int a2)
{
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *RecipientProcessById; // rax
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v5; // rbx
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v9; // eax
  int v10; // [rsp+30h] [rbp-29h] BYREF
  int v11; // [rsp+34h] [rbp-25h] BYREF
  int v12; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v14; // [rsp+60h] [rbp+7h]
  int v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+6Ch] [rbp+13h]
  int *v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]
  int *v20; // [rsp+80h] [rbp+27h]
  int v21; // [rsp+88h] [rbp+2Fh]
  int v22; // [rsp+8Ch] [rbp+33h]

  if ( *((_QWORD *)a1 + 3) )
    RmpGameModeRemoveCurrentRecipient(a1);
  if ( a2 )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    RecipientProcessById = RmpGameModeFindRecipientProcessById(a1, a2);
    v5 = RecipientProcessById;
    if ( RecipientProcessById && (*((_BYTE *)RecipientProcessById + 120) & 5) == 1 )
    {
      RtlLeaveCriticalSection(&RmpGlobalLock);
      RmpGameModeAcquireAndApplyRecipientResources(a1, v5);
      *((_QWORD *)a1 + 3) = v5;
      if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 9uLL) )
      {
        v9 = *((_DWORD *)v5 + 14);
        v16 = 0;
        v19 = 0;
        v22 = 0;
        v10 = v9;
        v14 = &v10;
        v11 = *((_DWORD *)v5 + 28);
        v17 = &v11;
        v12 = *((_DWORD *)v5 + 29);
        v20 = &v12;
        v15 = (int)v6;
        v18 = (int)v6;
        v21 = (int)v6;
        TlgWrite(v6, &unk_1800421FE, v7, v8, 5u, &pData);
      }
      RmpGameModePublishRecipientProcessId(a1);
    }
    else
    {
      RtlLeaveCriticalSection(&RmpGlobalLock);
      if ( v5 )
        RmpGameModeDereferenceRecipientProcess(v5);
    }
  }
}
