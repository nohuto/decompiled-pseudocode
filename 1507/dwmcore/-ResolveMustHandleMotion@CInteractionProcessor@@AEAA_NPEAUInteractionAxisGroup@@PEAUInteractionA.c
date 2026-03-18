/*
 * XREFs of ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NPEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18012E4E4
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18012D520 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall CInteractionProcessor::ResolveMustHandleMotion(
        CInteractionProcessor *this,
        struct InteractionAxisGroup *a2,
        struct InteractionAxis *a3,
        enum InteractionState *a4)
{
  unsigned __int8 v6; // bl
  unsigned int v7; // edx
  const GUID *v8; // r9
  float *v9; // r11
  float *v10; // rdi
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  CInteractionProcessor *v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  CInteractionProcessor **v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h]
  __int64 *v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  __int64 *v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  int *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  int *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  int *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  int *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  const GUID *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  float *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  float *v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+118h] [rbp+18h]

  v6 = 1;
  if ( *((_BYTE *)a2 + 1) )
    v6 = *((_BYTE *)a3 + 1) != 0;
  if ( *(_BYTE *)a2 )
    v6 &= -(*(_BYTE *)a3 != 0);
  v7 = 0;
  if ( !v6 )
    goto LABEL_10;
  v8 = (const GUID *)((char *)a3 + 4);
  v9 = (float *)((char *)a3 + 8);
  v10 = (float *)((char *)a3 + 12);
  do
  {
    if ( v7 >= *((_DWORD *)a2 + 8) )
      break;
    v6 = (float)((float)((float)(*v9 * *(float *)(*((_QWORD *)a2 + 1) + 12LL * v7 + 4))
                       + (float)(*(float *)&v8->Data1 * *(float *)(*((_QWORD *)a2 + 1) + 12LL * v7)))
               + (float)(*v10 * *(float *)(*((_QWORD *)a2 + 1) + 12LL * v7 + 8))) != 0.0;
    ++v7;
  }
  while ( v6 );
  if ( !v6 )
  {
LABEL_10:
    v8 = (const GUID *)((char *)a3 + 4);
    *(_DWORD *)a4 = *((_DWORD *)this + 88);
    v9 = (float *)((char *)a3 + 8);
    v10 = (float *)((char *)a3 + 12);
    *(_WORD *)a3 = 0;
    *((_DWORD *)a3 + 1) = 0;
    *((_DWORD *)a3 + 2) = 0;
    *((_DWORD *)a3 + 3) = 0;
  }
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_180190AC0 & 2) != 0 && (qword_180190AC8 & 2) == qword_180190AC8 )
  {
    v16 = this;
    v20 = &v16;
    v18 = *(_QWORD *)this;
    v22 = &v18;
    v17 = *((_QWORD *)this + 17);
    v24 = &v17;
    v15 = *((_DWORD *)this + 89);
    v26 = &v15;
    v14 = v6;
    v28 = &v14;
    v13 = *(unsigned __int8 *)a3;
    v30 = &v13;
    v12 = *((unsigned __int8 *)a3 + 1);
    v32 = &v12;
    v21 = 8LL;
    v23 = 8LL;
    v25 = 8LL;
    v27 = 4LL;
    v29 = 4LL;
    v31 = 4LL;
    v33 = 4LL;
    v34 = v8;
    v35 = 4LL;
    v36 = v9;
    v37 = 4LL;
    v38 = v10;
    v39 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016F39C, (LPCGUID)a3, v8, 0xCu, &pData);
  }
  return v6;
}
