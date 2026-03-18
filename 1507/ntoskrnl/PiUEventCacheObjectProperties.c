/*
 * XREFs of PiUEventCacheObjectProperties @ 0x140460C1C
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14046027C (PiUEventNotifyUserMode.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpGetObjectProperty @ 0x140437764 (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PiUEventCacheObjectProperties(__int64 a1)
{
  __int64 v1; // r15
  PVOID *v2; // r14
  void *v3; // rsi
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  int ObjectProperty; // eax
  int v16; // [rsp+28h] [rbp-38h]
  __int64 v17; // [rsp+90h] [rbp+30h] BYREF
  __int64 v18; // [rsp+98h] [rbp+38h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+40h] BYREF

  LODWORD(v17) = 0;
  v1 = a1 + 60;
  *(_DWORD *)(a1 + 60) = -1;
  v2 = (PVOID *)(a1 + 48);
  LODWORD(v18) = 0;
  v3 = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  v4 = *(_DWORD *)(a1 + 88);
  v19 = 0LL;
  v5 = v4 - 1;
  if ( !v5 )
  {
LABEL_6:
    v10 = a1 + 120;
    goto LABEL_7;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 5;
        if ( v9 )
        {
          if ( (unsigned int)(v9 - 1) >= 2 )
            return 0;
        }
      }
    }
    goto LABEL_6;
  }
  ObjectProperty = PnpGetObjectProperty(
                     0x59706E50u,
                     0xC8uLL,
                     (int)a1 + 136,
                     3,
                     0LL,
                     v16,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     (__int64)&v17,
                     (PVOID *)&v19,
                     &v18,
                     0);
  v3 = (void *)v19;
  v12 = ObjectProperty;
  if ( ObjectProperty < 0 )
    goto LABEL_11;
  v10 = v19;
LABEL_7:
  v11 = PnpGetObjectProperty(
          0x59706E50u,
          0x200uLL,
          v10,
          1,
          0LL,
          v16,
          (__int64)&DEVPKEY_Device_RestrictedSD,
          (__int64)&v17,
          v2,
          &v18,
          0);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( (_DWORD)v17 != 19 )
    {
      ExFreePoolWithTag(*v2, 0x59706E50u);
      *v2 = 0LL;
    }
    goto LABEL_9;
  }
  if ( v11 == -1073741275 || v11 == -1073741772 )
  {
LABEL_9:
    v13 = PnpGetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            v10,
            1u,
            0LL,
            0LL,
            (__int64)&DEVPKEY_Device_SessionId,
            (__int64)&v17,
            v1,
            4,
            (__int64)&v18,
            0);
    v12 = v13;
    if ( v13 == -1073741275 || v13 == -1073741772 )
      v12 = 0;
  }
LABEL_11:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x59706E50u);
  return v12;
}
