/*
 * XREFs of ?GetTransformedOutput@CInteractionContextWrapper@@UEAAJAEBVCMILMatrix@@PEAUInteractionOutput@@@Z @ 0x1801701A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x18017059C (-TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@.c)
 */

__int64 __fastcall CInteractionContextWrapper::GetTransformedOutput(
        CInteractionContextWrapper *this,
        const struct CMILMatrix *a2,
        struct InteractionOutput *a3)
{
  char *v4; // rdi
  __int128 v5; // xmm0
  unsigned int v7; // r8d
  unsigned int v8; // eax
  const GUID *v9; // r9
  __int128 v10; // xmm0
  unsigned int v12; // [rsp+30h] [rbp-D0h] BYREF
  CInteractionContextWrapper *v13; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  CInteractionContextWrapper **v15; // [rsp+60h] [rbp-A0h]
  __int64 v16; // [rsp+68h] [rbp-98h]
  char *v17; // [rsp+70h] [rbp-90h]
  __int64 v18; // [rsp+78h] [rbp-88h]
  char *v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  char *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  char *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  char *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  char *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  char *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  char *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  char *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  unsigned int *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]

  v4 = (char *)this + 160;
  v5 = *((_OWORD *)this + 10);
  v7 = 0;
  v12 = 0;
  *(_OWORD *)a3 = v5;
  *((_OWORD *)a3 + 1) = *((_OWORD *)this + 11);
  *((_OWORD *)a3 + 2) = *((_OWORD *)this + 12);
  *((_QWORD *)a3 + 6) = *((_QWORD *)this + 26);
  *((_DWORD *)a3 + 14) = *((_DWORD *)this + 54);
  if ( *((_BYTE *)this + 156) )
  {
    v8 = CInteractionContextWrapper::TransformOutput(
           this,
           a2,
           (CInteractionContextWrapper *)((char *)this + 32),
           (CInteractionContextWrapper *)((char *)this + 160));
    v10 = *(_OWORD *)v4;
    *((_BYTE *)this + 156) = 0;
    v7 = v8;
    v12 = v8;
    *(_OWORD *)a3 = v10;
    *((_OWORD *)a3 + 1) = *((_OWORD *)v4 + 1);
    *((_OWORD *)a3 + 2) = *((_OWORD *)v4 + 2);
    *((_QWORD *)a3 + 6) = *((_QWORD *)v4 + 6);
    *((_DWORD *)a3 + 14) = *((_DWORD *)v4 + 14);
    if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
    {
      v13 = this;
      v15 = &v13;
      v17 = (char *)this + 168;
      v19 = (char *)this + 172;
      v21 = (char *)this + 176;
      v23 = (char *)this + 184;
      v25 = (char *)this + 188;
      v27 = (char *)this + 192;
      v29 = (char *)this + 196;
      v31 = (char *)this + 200;
      v33 = (char *)this + 204;
      v35 = &v12;
      v16 = 8LL;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C6034, (LPCGUID)v8, v9, 0xDu, &pData);
      return v12;
    }
  }
  return v7;
}
