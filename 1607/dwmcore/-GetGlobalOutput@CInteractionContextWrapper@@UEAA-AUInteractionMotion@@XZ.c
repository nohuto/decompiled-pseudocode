/*
 * XREFs of ?GetGlobalOutput@CInteractionContextWrapper@@UEAA?AUInteractionMotion@@XZ @ 0x180170090
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     ?UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@PEAU2@@Z @ 0x18018C15C (-UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@PEAU2@@Z.c)
 */

__int64 __fastcall CInteractionContextWrapper::GetGlobalOutput(__int64 a1, __int64 a2)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v6; // r11d
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  __int64 *v10; // [rsp+60h] [rbp+7h]
  __int64 v11; // [rsp+68h] [rbp+Fh]
  __int64 v12; // [rsp+70h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+1Fh]
  __int64 v14; // [rsp+80h] [rbp+27h]
  __int64 v15; // [rsp+88h] [rbp+2Fh]
  __int64 v16; // [rsp+90h] [rbp+37h]
  __int64 v17; // [rsp+98h] [rbp+3Fh]

  if ( *(_BYTE *)(a1 + 92) )
  {
    CInteractionContextTransformHelper::UnTransformOutput(
      (CInteractionContextTransformHelper *)(a1 + 320),
      (const struct InteractionOutput *)(a1 + 32),
      (struct InteractionOutput *)(a1 + 96));
    *(_BYTE *)(a1 + 92) = v6;
    if ( (unsigned int)pRelatedActivityId > v6 + 4
      && (qword_1801EAA90 & 2) != 0
      && (qword_1801EAA98 & 2) == qword_1801EAA98 )
    {
      v8 = a1;
      v10 = &v8;
      v12 = a1 + 104;
      v14 = a1 + 108;
      v16 = a1 + 112;
      v11 = 8LL;
      v13 = (unsigned int)(v6 + 4);
      v15 = v13;
      v17 = v13;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C5FC0, v4, v5, 6u, &pData);
    }
  }
  result = a2;
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 112);
  return result;
}
