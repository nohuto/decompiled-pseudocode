/*
 * XREFs of SeObjectReferenceAuditAlarm @ 0x1404CFF94
 * Callers:
 *     ObpCheckObjectReference @ 0x1404CF854 (ObpCheckObjectReference.c)
 * Callees:
 *     SepAdtAuditThisEventWithContext @ 0x140432F30 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1406D2EF8 (SepAdtObjectReferenceAuditAlarm.c)
 *     SeExamineSacl @ 0x1406D47F0 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x1406D7C34 (SeExamineGlobalSacl.c)
 */

void __fastcall SeObjectReferenceAuditAlarm(
        __int64 a1,
        struct _KPROCESS *a2,
        __int64 a3,
        void **a4,
        ACCESS_MASK DesiredAccess,
        BOOLEAN GenerateAlarm,
        BOOLEAN a7,
        char a8)
{
  BOOLEAN AccessGranted; // si
  void *v12; // r8
  __int16 v13; // cx
  __int64 v14; // rdx
  ACL *v15; // rdx
  __int64 v16; // rax
  ACL *v17; // rcx
  void *v18; // r8
  __int16 v19; // ax
  __int64 v20; // rax
  ACL *v21; // rdx
  __int64 GenerateAudit; // [rsp+60h] [rbp+8h] BYREF

  GenerateAudit = a1;
  LOBYTE(GenerateAudit) = 0;
  GenerateAlarm = 0;
  if ( !a8 )
    return;
  if ( !a3 )
    return;
  AccessGranted = a7;
  if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(120LL, a7, 0, (__int64)a4) )
    return;
  v12 = *a4;
  if ( !*a4 )
    v12 = a4[2];
  v13 = *(_WORD *)(a3 + 2);
  if ( (v13 & 0x10) == 0 )
    goto LABEL_11;
  if ( (v13 & 0x8000) == 0 )
  {
    v15 = *(ACL **)(a3 + 24);
    goto LABEL_13;
  }
  v14 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v14 )
    v15 = (ACL *)(a3 + v14);
  else
LABEL_11:
    v15 = 0LL;
LABEL_13:
  if ( (v13 & 0x10) == 0 )
    goto LABEL_17;
  if ( (v13 & 0x8000) == 0 )
  {
    v17 = *(ACL **)(a3 + 24);
    goto LABEL_19;
  }
  v16 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v16 )
    v17 = (ACL *)(a3 + v16);
  else
LABEL_17:
    v17 = 0LL;
LABEL_19:
  SeExamineSacl(v17, v15, v12, DesiredAccess, AccessGranted, (PBOOLEAN)&GenerateAudit, &GenerateAlarm);
  v18 = *a4;
  if ( !*a4 )
    v18 = a4[2];
  v19 = *(_WORD *)(a3 + 2);
  if ( (v19 & 0x10) == 0 )
    goto LABEL_25;
  if ( (v19 & 0x8000) == 0 )
  {
    v21 = *(ACL **)(a3 + 24);
    goto LABEL_27;
  }
  v20 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v20 )
    v21 = (ACL *)(a3 + v20);
  else
LABEL_25:
    v21 = 0LL;
LABEL_27:
  SeExamineGlobalSacl(
    (PUNICODE_STRING)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ a2[-1].Spare2[63] ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8)]
                    + 16),
    v21,
    v18,
    DesiredAccess,
    AccessGranted,
    (PBOOLEAN)&GenerateAudit,
    &GenerateAlarm);
  if ( (_BYTE)GenerateAudit || GenerateAlarm )
    SepAdtObjectReferenceAuditAlarm(a2);
}
