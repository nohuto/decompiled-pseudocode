/*
 * XREFs of PiUEventCacheObjectProperties @ 0x1404E15C4
 * Callers:
 *     PiUEventNotifyUserMode @ 0x1404E09F4 (PiUEventNotifyUserMode.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     PnpGetObjectProperty @ 0x14043ED84 (PnpGetObjectProperty.c)
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
  __int64 v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  int v13; // edx
  int v14; // edx
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
LABEL_4:
    v8 = a1 + 120;
    goto LABEL_5;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v13 = v7 - 1;
      if ( v13 )
      {
        v14 = v13 - 5;
        if ( v14 )
        {
          if ( (unsigned int)(v14 - 1) >= 2 )
            return 0;
        }
      }
    }
    goto LABEL_4;
  }
  ObjectProperty = PnpGetObjectProperty(
                     0x59706E50u,
                     0xC8uLL,
                     a1 + 136,
                     3u,
                     0LL,
                     v16,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     (__int64)&v17,
                     (PVOID *)&v19,
                     &v18,
                     0);
  v3 = (void *)v19;
  v10 = ObjectProperty;
  if ( ObjectProperty < 0 )
    goto LABEL_10;
  v8 = v19;
LABEL_5:
  v9 = PnpGetObjectProperty(
         0x59706E50u,
         0x200uLL,
         v8,
         1u,
         0LL,
         v16,
         (__int64)&DEVPKEY_Device_RestrictedSD,
         (__int64)&v17,
         v2,
         &v18,
         0);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( (_DWORD)v17 != 19 )
    {
      ExFreePoolWithTag(*v2, 0x59706E50u);
      *v2 = 0LL;
    }
    goto LABEL_7;
  }
  if ( v9 == -1073741772 || v9 == -1073741275 )
  {
LABEL_7:
    v11 = PnpGetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            v8,
            1u,
            0LL,
            0LL,
            (__int64)&DEVPKEY_Device_SessionId,
            (__int64)&v17,
            v1,
            4,
            (__int64)&v18,
            0);
    v10 = v11;
    if ( v11 == -1073741275 || v11 == -1073741772 )
      v10 = 0;
  }
LABEL_10:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x59706E50u);
  return v10;
}
