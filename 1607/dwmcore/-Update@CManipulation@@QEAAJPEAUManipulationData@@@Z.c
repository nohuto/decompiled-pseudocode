/*
 * XREFs of ?Update@CManipulation@@QEAAJPEAUManipulationData@@@Z @ 0x180145EE8
 * Callers:
 *     ?Thunk_UpdateManipulation_62@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x18016B550 (-Thunk_UpdateManipulation_62@-$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 */

__int64 __fastcall CManipulation::Update(CManipulation *this, struct ManipulationData *a2)
{
  int v2; // edi
  const GUID *v3; // r9
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  void (__fastcall ***v8)(void *, GUID *, __int64 *); // r8
  unsigned int v9; // edx
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+3Ch] [rbp-C4h] BYREF
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  CManipulation *v17; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  CManipulation **v19; // [rsp+70h] [rbp-90h]
  __int64 v20; // [rsp+78h] [rbp-88h]
  const GUID *v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  char *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  char *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  char *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  char *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  char *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  char *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  char *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  char *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  char *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  char *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  char *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  char *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  char *v47; // [rsp+150h] [rbp+50h]
  __int64 v48; // [rsp+158h] [rbp+58h]
  int *v49; // [rsp+160h] [rbp+60h]
  __int64 v50; // [rsp+168h] [rbp+68h]
  int *v51; // [rsp+170h] [rbp+70h]
  __int64 v52; // [rsp+178h] [rbp+78h]
  int *v53; // [rsp+180h] [rbp+80h]
  __int64 v54; // [rsp+188h] [rbp+88h]
  int *v55; // [rsp+190h] [rbp+90h]
  __int64 v56; // [rsp+198h] [rbp+98h]
  int *v57; // [rsp+1A0h] [rbp+A0h]
  __int64 v58; // [rsp+1A8h] [rbp+A8h]
  int *v59; // [rsp+1B0h] [rbp+B0h]
  __int64 v60; // [rsp+1B8h] [rbp+B8h]

  v2 = *((_DWORD *)this + 100);
  v3 = (const GUID *)((char *)this + 268);
  *(_OWORD *)((char *)this + 268) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 284) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 300) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 316) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 332) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)this + 348) = *((_OWORD *)a2 + 5);
  *(_OWORD *)((char *)this + 364) = *((_OWORD *)a2 + 6);
  *(_OWORD *)((char *)this + 380) = *((_OWORD *)a2 + 7);
  *(_OWORD *)((char *)this + 396) = *((_OWORD *)a2 + 8);
  *((_DWORD *)this + 103) = *((_DWORD *)a2 + 36);
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v17 = this;
    v19 = &v17;
    v23 = (char *)this + 272;
    v25 = (char *)this + 276;
    v27 = (char *)this + 280;
    v29 = (char *)this + 284;
    v31 = (char *)this + 288;
    v33 = (char *)this + 296;
    v35 = (char *)this + 300;
    v37 = (char *)this + 304;
    v39 = (char *)this + 292;
    v41 = (char *)this + 396;
    v43 = (char *)this + 384;
    v45 = (char *)this + 388;
    v47 = (char *)this + 392;
    v5 = *((_DWORD *)this + 100);
    v6 = *((unsigned __int8 *)this + 412);
    v11 = v5;
    v49 = &v11;
    v20 = 8LL;
    v12 = v6 & 1;
    v51 = &v12;
    v13 = (v6 >> 1) & 1;
    v14 = (v6 >> 2) & 1;
    v7 = *((unsigned __int8 *)this + 264);
    v53 = &v13;
    v55 = &v14;
    v15 = (v7 >> 3) & 1;
    v21 = v3;
    v57 = &v15;
    v22 = 4LL;
    v24 = 4LL;
    v26 = 4LL;
    v28 = 4LL;
    v30 = 4LL;
    v32 = 4LL;
    v34 = 4LL;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 4LL;
    v42 = 4LL;
    v44 = 4LL;
    v46 = 4LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 4LL;
    v56 = 4LL;
    v58 = 4LL;
    v16 = (v7 >> 4) & 1;
    v60 = 4LL;
    v59 = &v16;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C3BC3, (LPCGUID)4, v3, 0x17u, &pData);
  }
  if ( *((_DWORD *)this + 100) == v2 )
  {
    v8 = 0LL;
    v9 = 0;
  }
  else
  {
    v8 = (void (__fastcall ***)(void *, GUID *, __int64 *))((char *)this + 8);
    v9 = 7;
  }
  CResource::NotifyOnChanged((_DWORD *)this + 2, v9, v8);
  return 0LL;
}
