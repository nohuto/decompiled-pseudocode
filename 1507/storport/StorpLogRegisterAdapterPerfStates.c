/*
 * XREFs of StorpLogRegisterAdapterPerfStates @ 0x1C0037B58
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0005260 (StorPortExtendedFunction.c)
 * Callees:
 *     _TlgWrite @ 0x1C000F63C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000F6DC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 */

char __fastcall StorpLogRegisterAdapterPerfStates(const struct _TlgProvider_t *a1, __int64 a2)
{
  unsigned int *v2; // rax
  unsigned __int64 RegHandle; // rbx
  unsigned int v4; // r9d
  __int64 v5; // rdi
  __int64 v6; // r10
  const struct _TlgProvider_t *v8; // r14
  __int64 v9; // rdx
  const GUID *v10; // r8
  const GUID *v11; // r9
  __int64 v12; // r10
  char v13; // r11
  __int64 v14; // rax
  char v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v18; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  char *v24; // [rsp+88h] [rbp-80h]
  int v25; // [rsp+90h] [rbp-78h]
  int v26; // [rsp+94h] [rbp-74h]
  char *v27; // [rsp+98h] [rbp-70h]
  int v28; // [rsp+A0h] [rbp-68h]
  int v29; // [rsp+A4h] [rbp-64h]
  __int64 *v30; // [rsp+A8h] [rbp-60h]
  int v31; // [rsp+B0h] [rbp-58h]
  int v32; // [rsp+B4h] [rbp-54h]
  int *v33; // [rsp+B8h] [rbp-50h]
  int v34; // [rsp+C0h] [rbp-48h]
  int v35; // [rsp+C4h] [rbp-44h]
  __int64 *v36; // [rsp+C8h] [rbp-40h]
  int v37; // [rsp+D0h] [rbp-38h]
  int v38; // [rsp+D4h] [rbp-34h]
  __int64 *v39; // [rsp+D8h] [rbp-30h]
  int v40; // [rsp+E0h] [rbp-28h]
  int v41; // [rsp+E4h] [rbp-24h]
  __int64 *v42; // [rsp+E8h] [rbp-20h]
  int v43; // [rsp+F0h] [rbp-18h]
  int v44; // [rsp+F4h] [rbp-14h]
  __int64 *v45; // [rsp+F8h] [rbp-10h]
  int v46; // [rsp+100h] [rbp-8h]
  int v47; // [rsp+104h] [rbp-4h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+18h] BYREF

  v2 = (unsigned int *)&retaddr;
  RegHandle = a1[79].RegHandle;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v8 = a1;
  if ( *(_BYTE *)(RegHandle + 24) )
  {
    v2 = (unsigned int *)(a2 + 20);
    v9 = *(unsigned __int8 *)(RegHandle + 24);
    do
    {
      a1 = (const struct _TlgProvider_t *)*v2;
      if ( *(_QWORD *)(v2 - 1) == 3LL )
      {
        if ( !v4 )
          v4 = v2[1];
      }
      else if ( (_DWORD)a1 == 1 && !v6 )
      {
        v5 = *(_QWORD *)(v2 + 1);
        v6 = *(_QWORD *)(v2 + 3);
      }
      v2 += 10;
      --v9;
    }
    while ( v9 );
  }
  if ( (unsigned int)dword_1C0044050 > 5 )
  {
    LOBYTE(v2) = TlgKeywordOn(a1, 0x400000000000uLL);
    if ( (_BYTE)v2 )
    {
      v20 = *(_QWORD *)(a2 + 8);
      v16 = v13;
      v17 = (int)v11;
      v18 = *(_QWORD *)(RegHandle + 32);
      v14 = *(_QWORD *)(RegHandle + 40);
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v41 = 0;
      v44 = 0;
      v47 = 0;
      v22 = v14;
      v24 = (char *)&v8[84].RegHandle + 4;
      v27 = &v16;
      v30 = &v20;
      v33 = &v17;
      v36 = &v18;
      v39 = &v22;
      v42 = &v19;
      v45 = &v21;
      v19 = v5;
      v21 = v12;
      v25 = 16;
      v28 = 1;
      v31 = 8;
      v34 = 4;
      v37 = 8;
      v40 = 8;
      v43 = 8;
      v46 = 8;
      LOBYTE(v2) = TlgWrite((TraceLoggingHProvider)8, &unk_1C003D406, v10, v11, 0xAu, &pData);
    }
  }
  return (char)v2;
}
