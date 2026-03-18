/*
 * XREFs of ?ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSetupInfo@@@Z @ 0x18012EB9C
 * Callers:
 *     ?ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z @ 0x18012EB60 (-ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z.c)
 *     ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x18012EECC (-EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?ShouldEnableMultifingerTapHold@CInteractionContextWrapper@@CA_NXZ @ 0x18012F2F4 (-ShouldEnableMultifingerTapHold@CInteractionContextWrapper@@CA_NXZ.c)
 */

__int64 __fastcall CInteractionContextWrapper::ConfigureInteractionContext(
        CInteractionContextWrapper *this,
        struct HINTERACTIONCONTEXT__ *a2,
        const struct SetupInfo *a3)
{
  bool v3; // zf
  bool v7; // r13
  bool v8; // r12
  bool v9; // r15
  bool v10; // si
  int v11; // edx
  int v12; // edi
  int v13; // ebx
  int v14; // esi
  struct HINTERACTIONCONTEXT__ *v15; // r15
  const GUID *v16; // r9
  bool v18; // [rsp+30h] [rbp-99h]
  int v19; // [rsp+34h] [rbp-95h] BYREF
  int v20; // [rsp+38h] [rbp-91h] BYREF
  int v21; // [rsp+3Ch] [rbp-8Dh] BYREF
  struct HINTERACTIONCONTEXT__ *v22; // [rsp+40h] [rbp-89h] BYREF
  CInteractionContextWrapper *v23; // [rsp+48h] [rbp-81h] BYREF
  _DWORD v24[8]; // [rsp+50h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-59h] BYREF
  CInteractionContextWrapper **v26; // [rsp+90h] [rbp-39h]
  int v27; // [rsp+98h] [rbp-31h]
  int v28; // [rsp+9Ch] [rbp-2Dh]
  int *v29; // [rsp+A0h] [rbp-29h]
  int v30; // [rsp+A8h] [rbp-21h]
  int v31; // [rsp+ACh] [rbp-1Dh]
  int *v32; // [rsp+B0h] [rbp-19h]
  int v33; // [rsp+B8h] [rbp-11h]
  int v34; // [rsp+BCh] [rbp-Dh]
  struct HINTERACTIONCONTEXT__ **v35; // [rsp+C0h] [rbp-9h]
  int v36; // [rsp+C8h] [rbp-1h]
  int v37; // [rsp+CCh] [rbp+3h]
  int *v38; // [rsp+D0h] [rbp+7h]
  int v39; // [rsp+D8h] [rbp+Fh]
  int v40; // [rsp+DCh] [rbp+13h]

  v3 = *(_DWORD *)a3 == 1;
  v22 = a2;
  v18 = v3 && (*((_BYTE *)a3 + 4) & 0x40) != 0 || *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 0x40) != 0;
  v7 = *(_DWORD *)a3 == 1 && *((char *)a3 + 4) < 0 || *(_DWORD *)a3 == 2 && *((char *)a3 + 4) < 0;
  v8 = *(_DWORD *)a3 == 1 && (*((_BYTE *)a3 + 4) & 3) != 0 || *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 3) != 0;
  v9 = *(_DWORD *)a3 == 1 && (*((_BYTE *)a3 + 4) & 0xC) != 0 || *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 0xC) != 0;
  v10 = *(_DWORD *)a3 == 1 && (*((_BYTE *)a3 + 4) & 0x30) != 0 || *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 0x30) != 0;
  v11 = ResetInteractionContext(a2);
  if ( v11 >= 0 )
  {
    v11 = SetPropertyInteractionContext(a2, 1LL);
    if ( v11 >= 0 )
    {
      v11 = SetPropertyInteractionContext(a2, 3LL);
      if ( v11 >= 0 )
      {
        v19 = SetPropertyInteractionContext(a2, 2LL);
        v11 = v19;
        if ( v19 >= 0 )
        {
          v12 = 2049;
          if ( v8 )
            v12 = 2307;
          if ( v9 )
            v12 |= 0x204u;
          if ( v10 )
            v12 |= 0x10u;
          if ( *((_BYTE *)a3 + 16) )
            v12 |= 0x80001000;
          v13 = 0;
          if ( v18 )
          {
            v13 = 1;
            if ( CInteractionContextWrapper::ShouldEnableMultifingerTapHold() )
              v13 = -2147483647;
          }
          v14 = 0;
          if ( v7 )
          {
            v14 = 1;
            if ( CInteractionContextWrapper::ShouldEnableMultifingerTapHold() )
              v14 = -2147483647;
          }
          v15 = v22;
          v24[0] = 1;
          v24[1] = v12;
          v24[2] = 2;
          v24[3] = v13;
          v24[4] = 4;
          v24[5] = v14;
          v19 = SetInteractionConfigurationInteractionContext(v22, 3LL, v24);
          v11 = v19;
          if ( (unsigned int)pRelatedActivityId > 4
            && (qword_180190AC0 & 2) != 0
            && (qword_180190AC8 & 2) == qword_180190AC8 )
          {
            v28 = 0;
            v31 = 0;
            v34 = 0;
            v37 = 0;
            v40 = 0;
            v26 = &v23;
            v29 = &v21;
            v32 = &v20;
            v35 = &v22;
            v38 = &v19;
            v23 = this;
            v27 = 8;
            v21 = v12;
            v30 = 4;
            v20 = v13;
            v33 = 4;
            LODWORD(v22) = v14;
            v36 = 4;
            v39 = 4;
            TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016F738, (LPCGUID)4, v16, 7u, &pData);
            v11 = v19;
          }
          if ( v11 >= 0 )
          {
            v11 = RegisterOutputCallbackInteractionContext(
                    v15,
                    CInteractionContextWrapper::s_InteractionContextCallback,
                    this);
            if ( v11 >= 0 && (!v18 && *((_DWORD *)this + 8) == 2 || !v7 && *((_DWORD *)this + 8) == 4) )
            {
              *((_DWORD *)this + 8) = 0;
              *((_DWORD *)this + 9) = 0;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v11;
}
