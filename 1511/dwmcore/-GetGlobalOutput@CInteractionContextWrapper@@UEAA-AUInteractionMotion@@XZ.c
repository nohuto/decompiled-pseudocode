/*
 * XREFs of ?GetGlobalOutput@CInteractionContextWrapper@@UEAA?AUInteractionMotion@@XZ @ 0x180143040
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@PEAU2@@Z @ 0x18015A07C (-UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@PEAU2@@Z.c)
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

  if ( *(_BYTE *)(a1 + 80) )
  {
    CInteractionContextTransformHelper::UnTransformOutput(
      (CInteractionContextTransformHelper *)(a1 + 208),
      (const struct InteractionOutput *)(a1 + 32),
      (struct InteractionOutput *)(a1 + 84));
    *(_BYTE *)(a1 + 80) = v6;
    if ( (unsigned int)pRelatedActivityId > v6 + 4
      && (qword_18019E950 & 2) != 0
      && (qword_18019E958 & 2) == qword_18019E958 )
    {
      v8 = a1;
      v10 = &v8;
      v12 = a1 + 92;
      v14 = a1 + 96;
      v16 = a1 + 100;
      v11 = 8LL;
      v13 = (unsigned int)(v6 + 4);
      v15 = v13;
      v17 = v13;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017ED81, v4, v5, 6u, &pData);
    }
  }
  result = a2;
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 92);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 100);
  return result;
}
