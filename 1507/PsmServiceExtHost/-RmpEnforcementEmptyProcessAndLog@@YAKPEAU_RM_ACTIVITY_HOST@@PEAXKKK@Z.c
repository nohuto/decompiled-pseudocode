/*
 * XREFs of ?RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z @ 0x18003A1E0
 * Callers:
 *     RmpEnforcementEmptyProcess @ 0x18003AE50 (RmpEnforcementEmptyProcess.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     _TlgCreateSid @ 0x18002F820 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x18002F848 (_TlgCreateWsz.c)
 *     MemUtilEmptyProcess @ 0x18004E04C (MemUtilEmptyProcess.c)
 */

__int64 __fastcall RmpEnforcementEmptyProcessAndLog(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, unsigned int a4)
{
  unsigned int v7; // eax
  const struct _TlgProvider_t *v8; // rcx
  int v9; // r8d
  unsigned int v10; // ebx
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  const GUID *v13; // r9
  __int64 v14; // r10
  __int64 v15; // r10
  const struct _TlgProvider_t *v16; // rcx
  __int64 v17; // r10
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  int v21; // [rsp+30h] [rbp-A1h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-9Dh] BYREF
  unsigned int v23; // [rsp+38h] [rbp-99h] BYREF
  int v24; // [rsp+3Ch] [rbp-95h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-91h] BYREF
  __int64 v26; // [rsp+48h] [rbp-89h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-81h] BYREF
  int *v28; // [rsp+70h] [rbp-61h]
  __int64 v29; // [rsp+78h] [rbp-59h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+90h] [rbp-41h] BYREF
  int *v32; // [rsp+A0h] [rbp-31h]
  __int64 v33; // [rsp+A8h] [rbp-29h]
  int *v34; // [rsp+B0h] [rbp-21h]
  __int64 v35; // [rsp+B8h] [rbp-19h]
  __int64 *v36; // [rsp+C0h] [rbp-11h]
  __int64 v37; // [rsp+C8h] [rbp-9h]
  int *v38; // [rsp+D0h] [rbp-1h]
  __int64 v39; // [rsp+D8h] [rbp+7h]
  int *v40; // [rsp+E0h] [rbp+Fh]
  __int64 v41; // [rsp+E8h] [rbp+17h]

  v7 = MemUtilEmptyProcess(a2);
  v9 = *((_DWORD *)a1 + 10);
  v10 = v7;
  if ( v9 )
  {
    if ( v9 == 1 && (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v8, 1uLL) )
    {
      v22 = v10;
      v28 = (int *)&v22;
      pDesc.Ptr = (ULONGLONG)&v21;
      v31.Ptr = (ULONGLONG)&v23;
      v29 = v14;
      v21 = a3;
      *(_QWORD *)&pDesc.Size = v14;
      v23 = a4;
      *(_QWORD *)&v31.Size = v14;
      TlgWrite(v11, &unk_18005B14C, v12, v13, 5u, &pData);
    }
  }
  else if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v8, 1uLL) )
  {
    v23 = v10;
    v28 = (int *)&v23;
    v29 = v15;
    TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 24);
    TlgCreateSid(&v31, (const SID *)((char *)a1 + 512));
    v16 = (const struct _TlgProvider_t *)*((unsigned int *)a1 + 145);
    v32 = &v21;
    v22 = *((_DWORD *)a1 + 146);
    v34 = (int *)&v22;
    v26 = *((_QWORD *)a1 + 3);
    v36 = &v26;
    v38 = &v24;
    v40 = (int *)&v25;
    v21 = (int)v16;
    v33 = v17;
    v35 = v17;
    v37 = 8LL;
    v24 = a3;
    v39 = v17;
    v25 = a4;
    v41 = v17;
    TlgWrite(v16, &unk_18005B293, v18, v19, 0xAu, &pData);
  }
  return v10;
}
