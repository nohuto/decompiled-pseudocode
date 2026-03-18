/*
 * XREFs of EtwpPsProvTraceThread @ 0x140661CA4
 * Callers:
 *     EtwTraceThread @ 0x140502700 (EtwTraceThread.c)
 * Callees:
 *     PsQueryThreadStartAddress @ 0x140007D48 (PsQueryThreadStartAddress.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     PsGetCurrentThreadTeb @ 0x1400EB578 (PsGetCurrentThreadTeb.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpPsProvTraceThread(__int64 a1, __int64 a2, char a3)
{
  _DWORD *CurrentThreadTeb; // rax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  ULONG v11; // r9d
  int v13; // [rsp+30h] [rbp-128h] BYREF
  __int64 v14; // [rsp+38h] [rbp-120h] BYREF
  __int64 v15; // [rsp+40h] [rbp-118h] BYREF
  int v16; // [rsp+48h] [rbp-110h] BYREF
  __int64 v17; // [rsp+50h] [rbp-108h]
  int v18; // [rsp+58h] [rbp-100h] BYREF
  __int64 v19; // [rsp+60h] [rbp-F8h] BYREF
  PCEVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-F0h]
  __int64 v21; // [rsp+70h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-D8h] BYREF
  int *v23; // [rsp+90h] [rbp-C8h]
  int v24; // [rsp+98h] [rbp-C0h]
  int v25; // [rsp+9Ch] [rbp-BCh]
  __int64 v26; // [rsp+A0h] [rbp-B8h]
  int v27; // [rsp+A8h] [rbp-B0h]
  int v28; // [rsp+ACh] [rbp-ACh]
  __int64 v29; // [rsp+B0h] [rbp-A8h]
  int v30; // [rsp+B8h] [rbp-A0h]
  int v31; // [rsp+BCh] [rbp-9Ch]
  __int64 *v32; // [rsp+C0h] [rbp-98h]
  int v33; // [rsp+C8h] [rbp-90h]
  int v34; // [rsp+CCh] [rbp-8Ch]
  __int64 *v35; // [rsp+D0h] [rbp-88h]
  int v36; // [rsp+D8h] [rbp-80h]
  int v37; // [rsp+DCh] [rbp-7Ch]
  __int64 *v38; // [rsp+E0h] [rbp-78h]
  int v39; // [rsp+E8h] [rbp-70h]
  int v40; // [rsp+ECh] [rbp-6Ch]
  __int64 *v41; // [rsp+F0h] [rbp-68h]
  int v42; // [rsp+F8h] [rbp-60h]
  int v43; // [rsp+FCh] [rbp-5Ch]
  __int64 v44; // [rsp+100h] [rbp-58h]
  int v45; // [rsp+108h] [rbp-50h]
  int v46; // [rsp+10Ch] [rbp-4Ch]
  int *v47; // [rsp+110h] [rbp-48h]
  int v48; // [rsp+118h] [rbp-40h]
  int v49; // [rsp+11Ch] [rbp-3Ch]
  __int64 *v50; // [rsp+120h] [rbp-38h]
  int v51; // [rsp+128h] [rbp-30h]
  int v52; // [rsp+12Ch] [rbp-2Ch]

  v17 = a1;
  v14 = 0LL;
  v15 = 0LL;
  v13 = 0;
  if ( a3 )
  {
    EventDescriptor = &ThreadStart;
    CurrentThreadTeb = PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      if ( KeGetCurrentThread()->Process[1].ActiveProcessors.Bitmap[7] )
        v7 = CurrentThreadTeb[3032];
      else
        v7 = CurrentThreadTeb[1480];
      v13 = v7;
    }
  }
  else
  {
    EventDescriptor = (PCEVENT_DESCRIPTOR)&ThreadStop;
    v8 = *(_QWORD *)(a1 + 240);
    if ( v8 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1064LL) )
        v9 = *(_DWORD *)(v8 + 12128);
      else
        v9 = *(_DWORD *)(v8 + 5920);
      v13 = v9;
    }
  }
  v16 = *(_DWORD *)(a1 + 1576);
  UserData.Ptr = (ULONGLONG)&v16;
  UserData.Size = 4;
  UserData.Reserved = 0;
  v18 = *(_DWORD *)(a1 + 1584);
  v23 = &v18;
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
      v14 = *(_QWORD *)(a2 + 16);
      v15 = *(_QWORD *)(a2 + 24);
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 240);
    if ( v10 )
    {
      v14 = *(_QWORD *)(v10 + 8);
      v15 = *(_QWORD *)(v10 + 16);
    }
  }
  v32 = &v14;
  v33 = 8;
  v34 = 0;
  v35 = &v15;
  v36 = 8;
  v37 = 0;
  PsQueryThreadStartAddress(a1, 1);
  v38 = &v19;
  v39 = 8;
  v40 = 0;
  v19 = *(_QWORD *)(a1 + 1664);
  v41 = &v19;
  v42 = 8;
  v43 = 0;
  v44 = a1 + 240;
  v45 = 8;
  v46 = 0;
  v47 = &v13;
  v48 = 4;
  v49 = 0;
  v11 = 10;
  if ( !a3 )
  {
    v21 = *(_QWORD *)(a1 + 72);
    v50 = &v21;
    v51 = 8;
    v52 = 0;
    v11 = 11;
  }
  return EtwWrite(EtwpPsProvRegHandle, EventDescriptor, 0LL, v11, &UserData);
}
