/*
 * XREFs of SeOpenObjectAuditAlarmForNonObObject @ 0x14057FEDC
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140413A18 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x140413C10 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14068F610 (SepAdtOpenObjectAuditAlarm.c)
 *     SeExamineSacl @ 0x140691504 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x140695550 (SeExamineGlobalSacl.c)
 */

void __fastcall SeOpenObjectAuditAlarmForNonObObject(
        PUNICODE_STRING ObjectType,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned int *a5,
        __int64 *a6,
        int a7,
        int a8,
        int *a9,
        BOOLEAN GenerateAudit,
        _BYTE *a11)
{
  BOOLEAN AccessGranted; // si
  __int64 *v12; // rdi
  unsigned __int16 *v14; // rbx
  BOOLEAN v16; // al
  int v17; // r12d
  void *v18; // r8
  __int64 v19; // rbx
  __int16 v20; // cx
  __int64 v21; // rdx
  ACL *v22; // rdx
  __int64 v23; // rax
  ACL *v24; // rcx
  int v25; // r14d
  ACCESS_MASK v26; // ebp
  void *v27; // r8
  __int16 v28; // ax
  __int64 v29; // rax
  ACL *v30; // rdx
  BOOLEAN GenerateAlarm[72]; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v32; // [rsp+F8h] [rbp+10h] BYREF
  unsigned __int16 *v33; // [rsp+100h] [rbp+18h]

  v33 = a3;
  v32 = a2;
  AccessGranted = GenerateAudit;
  v12 = a6;
  v14 = a3;
  GenerateAlarm[0] = 0;
  v16 = SepAdtAuditThisEventWithContext(119LL, GenerateAudit, GenerateAudit == 0, (__int64)a6);
  v17 = a7;
  GenerateAudit = v16;
  if ( !v16 )
    goto LABEL_2;
  v18 = (void *)*v12;
  if ( !*v12 )
    v18 = (void *)v12[2];
  v19 = (__int64)a5;
  v20 = *((_WORD *)a5 + 1);
  if ( (v20 & 0x10) == 0 )
    goto LABEL_10;
  if ( (v20 & 0x8000) == 0 )
  {
    v22 = (ACL *)*((_QWORD *)a5 + 3);
    goto LABEL_12;
  }
  v21 = a5[3];
  if ( (_DWORD)v21 )
    v22 = (ACL *)((char *)a5 + v21);
  else
LABEL_10:
    v22 = 0LL;
LABEL_12:
  if ( (v20 & 0x10) == 0 )
    goto LABEL_16;
  if ( (v20 & 0x8000) == 0 )
  {
    v24 = (ACL *)*((_QWORD *)a5 + 3);
    goto LABEL_18;
  }
  v23 = a5[3];
  if ( (_DWORD)v23 )
    v24 = (ACL *)((char *)a5 + v23);
  else
LABEL_16:
    v24 = 0LL;
LABEL_18:
  v25 = a8;
  v26 = a8 | a7;
  SeExamineSacl(v24, v22, v18, a8 | a7, AccessGranted, &GenerateAudit, GenerateAlarm);
  v27 = (void *)*v12;
  if ( !*v12 )
    v27 = (void *)v12[2];
  v28 = *(_WORD *)(v19 + 2);
  if ( (v28 & 0x10) == 0 )
    goto LABEL_24;
  if ( v28 >= 0 )
  {
    v30 = *(ACL **)(v19 + 24);
    goto LABEL_26;
  }
  v29 = *(unsigned int *)(v19 + 12);
  if ( (_DWORD)v29 )
    v30 = (ACL *)(v19 + v29);
  else
LABEL_24:
    v30 = 0LL;
LABEL_26:
  SeExamineGlobalSacl(ObjectType, v30, v27, v26, AccessGranted, &GenerateAudit, GenerateAlarm);
  if ( GenerateAudit )
  {
    SepAdtOpenObjectAuditAlarm(
      119,
      (int)ObjectType,
      (int)&v32,
      (int)v33,
      (__int64)a4,
      (PVOID)v19,
      *v12,
      v12[2],
      v17,
      v25,
      (__int64)a9,
      AccessGranted,
      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink,
      2,
      0LL,
      0,
      0LL,
      0LL,
      0LL);
    *a11 = 1;
    return;
  }
  v14 = v33;
LABEL_2:
  if ( a9 )
  {
    if ( AccessGranted )
      SepAdtPrivilegeObjectAuditAlarm(
        (const int *)ObjectType,
        v14,
        a4,
        v32,
        *v12,
        v12[2],
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink,
        v17,
        a9,
        AccessGranted);
  }
}
