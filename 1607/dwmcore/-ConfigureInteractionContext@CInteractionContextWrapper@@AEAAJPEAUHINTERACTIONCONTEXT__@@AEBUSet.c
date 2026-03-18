/*
 * XREFs of ?ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSetupInfo@@@Z @ 0x1801103A8
 * Callers:
 *     ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x1800A5420 (-EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ.c)
 *     ?ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z @ 0x18016FC70 (-ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 */

__int64 __fastcall CInteractionContextWrapper::ConfigureInteractionContext(
        CInteractionContextWrapper *this,
        struct HINTERACTIONCONTEXT__ *a2,
        const struct SetupInfo *a3)
{
  bool v6; // r13
  bool v7; // r15
  bool v8; // r14
  int v9; // edx
  int v10; // edi
  int v11; // ebx
  int v12; // r14d
  const GUID *v13; // r9
  bool v15; // [rsp+30h] [rbp-99h]
  bool v16; // [rsp+31h] [rbp-98h]
  int v17; // [rsp+34h] [rbp-95h] BYREF
  int v18; // [rsp+38h] [rbp-91h] BYREF
  int v19; // [rsp+3Ch] [rbp-8Dh] BYREF
  int v20; // [rsp+40h] [rbp-89h] BYREF
  CInteractionContextWrapper *v21; // [rsp+48h] [rbp-81h] BYREF
  _DWORD v22[8]; // [rsp+50h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-59h] BYREF
  CInteractionContextWrapper **v24; // [rsp+90h] [rbp-39h]
  int v25; // [rsp+98h] [rbp-31h]
  int v26; // [rsp+9Ch] [rbp-2Dh]
  int *v27; // [rsp+A0h] [rbp-29h]
  int v28; // [rsp+A8h] [rbp-21h]
  int v29; // [rsp+ACh] [rbp-1Dh]
  int *v30; // [rsp+B0h] [rbp-19h]
  int v31; // [rsp+B8h] [rbp-11h]
  int v32; // [rsp+BCh] [rbp-Dh]
  int *v33; // [rsp+C0h] [rbp-9h]
  int v34; // [rsp+C8h] [rbp-1h]
  int v35; // [rsp+CCh] [rbp+3h]
  int *v36; // [rsp+D0h] [rbp+7h]
  int v37; // [rsp+D8h] [rbp+Fh]
  int v38; // [rsp+DCh] [rbp+13h]

  v15 = *(_DWORD *)a3 == 1 && (*((_BYTE *)a3 + 4) & 0x40) != 0 || *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 0x40) != 0;
  v16 = *(_DWORD *)a3 == 1 && *((char *)a3 + 4) < 0 || *(_DWORD *)a3 == 2 && *((char *)a3 + 4) < 0;
  v6 = *(_DWORD *)a3 == 1 && (*((_BYTE *)a3 + 4) & 3) != 0 || *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 3) != 0;
  v7 = *(_DWORD *)a3 == 1 && (*((_BYTE *)a3 + 4) & 0xC) != 0 || *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 0xC) != 0;
  v8 = *(_DWORD *)a3 == 1 && (*((_BYTE *)a3 + 4) & 0x30) != 0 || *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 0x30) != 0;
  v9 = ResetInteractionContext(a2);
  if ( v9 >= 0 )
  {
    v9 = SetPropertyInteractionContext(a2, 1LL, 0LL);
    if ( v9 >= 0 )
    {
      v9 = SetPropertyInteractionContext(a2, 3LL, 0LL);
      if ( v9 >= 0 )
      {
        v17 = SetPropertyInteractionContext(a2, 2LL, 0LL);
        v9 = v17;
        if ( v17 >= 0 )
        {
          v10 = 2049;
          if ( *((float *)a3 + 2) != 0.0 )
            v10 = 2305;
          if ( *((float *)a3 + 3) != 0.0 )
            v10 |= 0x200u;
          if ( v6 )
            v10 |= 2u;
          if ( v7 )
            v10 |= 4u;
          if ( v8 )
            v10 |= 0x10u;
          if ( *((_BYTE *)a3 + 16) )
            v10 |= 0x40000000u;
          v11 = 0;
          v22[0] = 1;
          v22[1] = v10;
          v22[2] = 2;
          if ( v15 )
            v11 = -2147483647;
          v22[4] = 4;
          v12 = 0;
          v22[3] = v11;
          if ( v16 )
            v12 = -2147483647;
          v22[5] = v12;
          v17 = SetInteractionConfigurationInteractionContext(a2, 3LL, v22);
          v9 = v17;
          if ( (unsigned int)pRelatedActivityId > 4
            && (qword_1801EAA90 & 2) != 0
            && (qword_1801EAA98 & 2) == qword_1801EAA98 )
          {
            v26 = 0;
            v29 = 0;
            v32 = 0;
            v35 = 0;
            v38 = 0;
            v24 = &v21;
            v27 = &v18;
            v30 = &v19;
            v33 = &v20;
            v36 = &v17;
            v21 = this;
            v25 = 8;
            v18 = v10;
            v28 = 4;
            v19 = v11;
            v31 = 4;
            v20 = v12;
            v34 = 4;
            v37 = 4;
            TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C5F02, (LPCGUID)4, v13, 7u, &pData);
            v9 = v17;
          }
          if ( v9 >= 0 )
          {
            v9 = RegisterOutputCallbackInteractionContext(
                   a2,
                   CInteractionContextWrapper::s_InteractionContextCallback,
                   this);
            if ( v9 >= 0 && (!v15 && *((_DWORD *)this + 8) == 2 || !v16 && *((_DWORD *)this + 8) == 4) )
            {
              *((_DWORD *)this + 8) = 0;
              *((_DWORD *)this + 9) = 0;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v9;
}
