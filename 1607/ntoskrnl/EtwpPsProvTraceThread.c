/*
 * XREFs of EtwpPsProvTraceThread @ 0x14054B710
 * Callers:
 *     EtwTraceThread @ 0x1404597E4 (EtwTraceThread.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     PsQueryThreadStartAddress @ 0x140074C20 (PsQueryThreadStartAddress.c)
 *     PsGetCurrentThreadTeb @ 0x1400A9E54 (PsGetCurrentThreadTeb.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpPsProvTraceThread(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  ULONG v9; // r9d
  _DWORD *CurrentThreadTeb; // rax
  int v12; // eax
  int v13; // [rsp+30h] [rbp-118h] BYREF
  int v14; // [rsp+34h] [rbp-114h] BYREF
  int v15; // [rsp+38h] [rbp-110h] BYREF
  __int64 v16; // [rsp+40h] [rbp-108h]
  __int64 v17; // [rsp+48h] [rbp-100h] BYREF
  __int64 v18; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-F0h] BYREF
  PCEVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-E8h]
  __int64 v21; // [rsp+68h] [rbp-E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-D8h] BYREF
  int *v23; // [rsp+80h] [rbp-C8h]
  int v24; // [rsp+88h] [rbp-C0h]
  int v25; // [rsp+8Ch] [rbp-BCh]
  __int64 v26; // [rsp+90h] [rbp-B8h]
  int v27; // [rsp+98h] [rbp-B0h]
  int v28; // [rsp+9Ch] [rbp-ACh]
  __int64 v29; // [rsp+A0h] [rbp-A8h]
  int v30; // [rsp+A8h] [rbp-A0h]
  int v31; // [rsp+ACh] [rbp-9Ch]
  __int64 *v32; // [rsp+B0h] [rbp-98h]
  int v33; // [rsp+B8h] [rbp-90h]
  int v34; // [rsp+BCh] [rbp-8Ch]
  __int64 *v35; // [rsp+C0h] [rbp-88h]
  int v36; // [rsp+C8h] [rbp-80h]
  int v37; // [rsp+CCh] [rbp-7Ch]
  __int64 *v38; // [rsp+D0h] [rbp-78h]
  int v39; // [rsp+D8h] [rbp-70h]
  int v40; // [rsp+DCh] [rbp-6Ch]
  __int64 *v41; // [rsp+E0h] [rbp-68h]
  int v42; // [rsp+E8h] [rbp-60h]
  int v43; // [rsp+ECh] [rbp-5Ch]
  __int64 v44; // [rsp+F0h] [rbp-58h]
  int v45; // [rsp+F8h] [rbp-50h]
  int v46; // [rsp+FCh] [rbp-4Ch]
  int *v47; // [rsp+100h] [rbp-48h]
  int v48; // [rsp+108h] [rbp-40h]
  int v49; // [rsp+10Ch] [rbp-3Ch]
  __int64 *v50; // [rsp+110h] [rbp-38h]
  int v51; // [rsp+118h] [rbp-30h]
  int v52; // [rsp+11Ch] [rbp-2Ch]

  v16 = a1;
  v17 = 0LL;
  v18 = 0LL;
  v13 = 0;
  if ( a3 )
  {
    EventDescriptor = &ThreadStart;
    CurrentThreadTeb = PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      if ( KeGetCurrentThread()->Process[1].ActiveProcessors.Bitmap[7] )
        v12 = CurrentThreadTeb[3032];
      else
        v12 = CurrentThreadTeb[1480];
      v13 = v12;
    }
  }
  else
  {
    EventDescriptor = (PCEVENT_DESCRIPTOR)&ThreadStop;
    v6 = *(_QWORD *)(a1 + 240);
    if ( v6 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1064LL) )
        v7 = *(_DWORD *)(v6 + 12128);
      else
        v7 = *(_DWORD *)(v6 + 5920);
      v13 = v7;
    }
  }
  v14 = *(_DWORD *)(a1 + 1584);
  UserData.Ptr = (ULONGLONG)&v14;
  UserData.Size = 4;
  UserData.Reserved = 0;
  v15 = *(_DWORD *)(a1 + 1592);
  v23 = &v15;
  v24 = 4;
  v25 = 0;
  v26 = a1 + 56;
  v27 = 8;
  v28 = 0;
  v29 = a1 + 48;
  v30 = 8;
  v31 = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      v17 = *(_QWORD *)(a2 + 16);
      v18 = *(_QWORD *)(a2 + 24);
    }
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 240);
    if ( v8 )
    {
      v17 = *(_QWORD *)(v8 + 8);
      v18 = *(_QWORD *)(v8 + 16);
    }
  }
  v32 = &v17;
  v33 = 8;
  v34 = 0;
  v35 = &v18;
  v36 = 8;
  v37 = 0;
  PsQueryThreadStartAddress(a1, 1);
  v38 = &v19;
  v39 = 8;
  v40 = 0;
  v19 = *(_QWORD *)(a1 + 1672);
  v41 = &v19;
  v42 = 8;
  v43 = 0;
  v44 = a1 + 240;
  v45 = 8;
  v46 = 0;
  v47 = &v13;
  v48 = 4;
  v49 = 0;
  v9 = 10;
  if ( !a3 )
  {
    v21 = *(_QWORD *)(a1 + 72);
    v50 = &v21;
    v51 = 8;
    v52 = 0;
    v9 = 11;
  }
  return EtwWrite(EtwpPsProvRegHandle, EventDescriptor, 0LL, v9, &UserData);
}
