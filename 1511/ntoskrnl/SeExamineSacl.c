/*
 * XREFs of SeExamineSacl @ 0x140652140
 * Callers:
 *     SeObjectReferenceAuditAlarm @ 0x1404709B4 (SeObjectReferenceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140470A30 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     NtOpenObjectAuditAlarm @ 0x1404B9924 (NtOpenObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x14054A420 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     CmpExamineSaclForAuditEvent @ 0x1405E321C (CmpExamineSaclForAuditEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14064DE24 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14065252C (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SeExamineGlobalSacl @ 0x140655D28 (SeExamineGlobalSacl.c)
 * Callees:
 *     SepSidInToken @ 0x140003818 (SepSidInToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400050D4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140006054 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000D930 (AuthzBasepFreeSecurityAttributesList.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall SeExamineSacl(
        PACL Sacl,
        PACL ResourceSacl,
        PACCESS_TOKEN Token,
        ACCESS_MASK DesiredAccess,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateAudit,
        PBOOLEAN GenerateAlarm)
{
  _DWORD *v7; // rbp
  PACCESS_TOKEN v9; // r10
  char v11; // r14
  unsigned __int8 *v12; // rdi
  _WORD *v13; // rcx
  int v14; // eax
  unsigned int v15; // edx
  PACL v16; // rbx
  char Sbz1; // si
  ACL *v18; // r15
  unsigned int v19; // r11d
  unsigned int v20; // ecx
  _QWORD *v21; // rax
  __int64 v22; // r10
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r9
  char v26; // al
  int v27; // [rsp+60h] [rbp-68h] BYREF
  int v28; // [rsp+64h] [rbp-64h]
  unsigned int AceCount; // [rsp+68h] [rbp-60h]
  _DWORD *v30; // [rsp+70h] [rbp-58h] BYREF
  unsigned int Size; // [rsp+D0h] [rbp+8h]
  ACCESS_MASK v34; // [rsp+E8h] [rbp+20h]
  unsigned int GenerateAudita; // [rsp+F8h] [rbp+30h]
  unsigned int GenerateAlarma; // [rsp+100h] [rbp+38h]

  v34 = DesiredAccess;
  v27 = -1;
  v7 = 0LL;
  v9 = Token;
  v30 = 0LL;
  Size = 0;
  *GenerateAudit = 0;
  *GenerateAlarm = 0;
  if ( Sacl )
  {
    AceCount = Sacl->AceCount;
    if ( AceCount )
    {
      v11 = 0;
      if ( (DesiredAccess & 0x2000000) != 0 )
        v11 = AccessGranted != 0 ? 64 : 0x80;
      v12 = (unsigned __int8 *)SeWorldSid;
      v13 = (_WORD *)**((_QWORD **)Token + 19);
      if ( *v13 == *(_WORD *)SeAnonymousLogonSid )
      {
        v14 = memcmp(v13, SeAnonymousLogonSid, 4 * *((unsigned __int8 *)SeAnonymousLogonSid + 1) + 8);
        v9 = Token;
        if ( !v14 )
          Size = 4 * v12[1] + 8;
      }
      v15 = 0;
      v16 = Sacl + 1;
      GenerateAudita = 0;
      while ( 1 )
      {
        if ( *GenerateAudit )
        {
LABEL_52:
          if ( v7 )
          {
            AuthzBasepFreeSecurityAttributesList(v7);
            ExFreePoolWithTag(v7, 0);
          }
          return;
        }
        Sbz1 = v16->Sbz1;
        if ( (Sbz1 & 8) == 0 )
          break;
LABEL_51:
        ++v15;
        v9 = Token;
        v16 = (PACL)((char *)v16 + v16->AclSize);
        GenerateAudita = v15;
        if ( v15 >= AceCount )
          goto LABEL_52;
      }
      if ( v16->AclRevision == 2 )
      {
        LOBYTE(DesiredAccess) = 1;
        if ( !(unsigned __int8)SepSidInToken((__int64)v9, 0LL, (__int64)&v16[1], *(__int64 *)&DesiredAccess, 0, 0)
          && (!Size || *(_WORD *)v12 != *(_WORD *)&v16[1].AclRevision || memcmp(v12, &v16[1], Size)) )
        {
          goto LABEL_50;
        }
        if ( (*(_DWORD *)&v16->AceCount & v34) == 0 )
        {
          v15 = GenerateAudita;
          if ( ((unsigned __int8)Sbz1 & (unsigned __int8)v11) != 0 )
            *GenerateAudit = 1;
          goto LABEL_51;
        }
      }
      else
      {
        if ( v16->AclRevision != 13 )
          goto LABEL_51;
        v18 = v16 + 1;
        v19 = 4 * v16[1].Sbz1 + 8;
        v28 = *(_DWORD *)&v16->AceCount;
        GenerateAlarma = v19;
        if ( ResourceSacl && !v7 )
        {
          AuthzBasepInitializeResourceClaimsFromSacl((__int64)ResourceSacl, &v30);
          v19 = GenerateAlarma;
          v15 = GenerateAudita;
          v7 = v30;
          v12 = (unsigned __int8 *)SeWorldSid;
        }
        v20 = v16->AclSize - v19;
        if ( (int)(v20 - 8) <= 0 )
          goto LABEL_51;
        v21 = (_QWORD *)*((_QWORD *)Token + 137);
        if ( v21 )
          v22 = v21[75];
        else
          v22 = 0LL;
        if ( v21 )
          v23 = v21[73];
        else
          v23 = 0LL;
        if ( v21 )
          v24 = v21[74];
        else
          v24 = 0LL;
        if ( v21 )
          v25 = v21[72];
        else
          v25 = 0LL;
        AuthzBasepEvaluateAceCondition(
          (__int64)Token,
          *((_QWORD *)Token + 97),
          (__int64)v7,
          v25,
          v24,
          v23,
          v22,
          (ACL *)((char *)v18 + v19),
          v20 - 8,
          1,
          0,
          &v27);
        if ( ((v27 + 1) & 0xFFFFFFFD) != 0 )
        {
          v12 = (unsigned __int8 *)SeWorldSid;
          goto LABEL_50;
        }
        LOBYTE(DesiredAccess) = 1;
        v26 = SepSidInToken((__int64)Token, 0LL, (__int64)&v16[1], *(__int64 *)&DesiredAccess, 0, 0);
        v12 = (unsigned __int8 *)SeWorldSid;
        if ( !v26 && (!Size || *(_WORD *)SeWorldSid != *(_WORD *)&v18->AclRevision || memcmp(SeWorldSid, &v16[1], Size)) )
          goto LABEL_50;
        if ( (v34 & v28) == 0 )
        {
          if ( ((unsigned __int8)Sbz1 & (unsigned __int8)v11) == 0 )
            goto LABEL_50;
          goto LABEL_21;
        }
      }
      if ( ((Sbz1 & 0x40) == 0 || !AccessGranted) && (Sbz1 >= 0 || AccessGranted) )
        goto LABEL_50;
LABEL_21:
      *GenerateAudit = 1;
LABEL_50:
      v15 = GenerateAudita;
      goto LABEL_51;
    }
  }
}
