/*
 * XREFs of ?GetMultiContactDeviceState@@YAJPEAU_HIDP_PREPARSED_DATA@@GPEAUtagPOINTEREVENTINT@@PEAUDEVICEINFO@@KPEADPEAUtagHPD_CONTACT_GEOMETRY@@@Z @ 0x1C01C5118
 * Callers:
 *     ExtractDeviceUsages @ 0x1C01C995C (ExtractDeviceUsages.c)
 * Callees:
 *     ApplyTransforms @ 0x1C01C1EC0 (ApplyTransforms.c)
 *     ?PostPointerDeviceArrival@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@K@Z @ 0x1C01C5AD8 (-PostPointerDeviceArrival@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@K@Z.c)
 *     DoPrediction @ 0x1C01C8420 (DoPrediction.c)
 *     GetNextFreeCursor @ 0x1C01CAF64 (GetNextFreeCursor.c)
 *     GetPointerDeviceContactState @ 0x1C01CB070 (GetPointerDeviceContactState.c)
 *     IsFrameReportingPointerDevice @ 0x1C01CC010 (IsFrameReportingPointerDevice.c)
 *     ApplyPTPTranslation @ 0x1C01CEC60 (ApplyPTPTranslation.c)
 *     GetPTPContactState @ 0x1C01CF2F0 (GetPTPContactState.c)
 */

__int64 __fastcall GetMultiContactDeviceState(
        struct _HIDP_PREPARSED_DATA *a1,
        unsigned __int16 a2,
        struct tagPOINTEREVENTINT *a3,
        struct DEVICEINFO *a4,
        ULONG a5,
        char *a6,
        struct tagHPD_CONTACT_GEOMETRY *a7)
{
  __int64 v7; // rdi
  unsigned int v8; // ebp
  int v9; // r10d
  int v10; // r15d
  int v12; // r13d
  unsigned int v13; // r8d
  struct tagHPD_CONTACT_GEOMETRY *v14; // r14
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rbx
  unsigned int PTPContactState; // ebp
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 **v25; // rdx
  __int64 *i; // rcx
  int v28; // [rsp+90h] [rbp+8h]
  __int64 v30; // [rsp+A0h] [rbp+18h] BYREF

  v28 = (int)a1;
  v7 = *((_QWORD *)a4 + 52);
  v8 = 0;
  LODWORD(v30) = 0;
  v9 = 0;
  v10 = 0;
  v12 = (int)a4;
  v13 = *(_DWORD *)(v7 + 704);
  if ( *(_DWORD *)(v7 + 24) == 8 )
    --v13;
  v14 = a7;
  v15 = 0;
  if ( v13 )
  {
    v16 = *(_QWORD *)(v7 + 680);
    do
    {
      v17 = 2400LL * v15;
      if ( *(_DWORD *)(v17 + v16) == *(_DWORD *)a7 && *(_DWORD *)(v17 + v16 + 2336) )
      {
        v22 = 2400LL * v15;
        v23 = *(_DWORD *)(v16 + v22 + 2392);
        if ( (v23 & 2) != 0 )
          *(_DWORD *)(v16 + v22 + 2392) = v23 | 4;
        v10 = 1;
        *(_WORD *)a3 = *(_WORD *)(*(_QWORD *)(v7 + 680) + v22 + 2332);
        goto LABEL_18;
      }
      if ( !*(_DWORD *)(v17 + v16 + 2336) && !v9 )
      {
        v9 = 1;
        v8 = v15;
      }
      ++v15;
    }
    while ( v15 < v13 );
    if ( !v9 )
      goto LABEL_25;
    v18 = *(_DWORD *)(v7 + 236);
    v19 = *(_DWORD *)(v7 + 688) + 1;
    *(_DWORD *)(v7 + 688) = v19;
    if ( (v18 & 0x20) != 0 && v19 > 1 )
      *(_DWORD *)(2400LL * v8 + v16 + 2392) |= 0x20u;
    v20 = 2400LL * v8;
    *(_DWORD *)(*(_QWORD *)(v7 + 680) + v20 + 2392) &= ~4u;
    *(_DWORD *)(v20 + *(_QWORD *)(v7 + 680)) = *(_DWORD *)v14;
    *(_DWORD *)(*(_QWORD *)(v7 + 680) + v20 + 2336) = 1;
    *(_DWORD *)(*(_QWORD *)(v7 + 680) + v20 + 2332) = GetNextFreeCursor(v7);
    *(_WORD *)a3 = *(_WORD *)(*(_QWORD *)(v7 + 680) + v20 + 2332);
    if ( *(_DWORD *)(v7 + 688) == 1 )
      PostPointerDeviceArrival((struct tagHID_POINTER_DEVICE_INFO *)v7, v8);
    v15 = v8;
LABEL_18:
    if ( *(_DWORD *)(v7 + 24) == 8 )
    {
      ApplyPTPTranslation((struct tagHID_POINTER_DEVICE_INFO *)v7);
      PTPContactState = GetPTPContactState(v28, a2, (int)a3, v12, v15, a5, (__int64)a6, (__int64)v14);
      EtwTracePointerDeviceContactIds(v10 == 0, *(unsigned int *)v14, *(unsigned __int16 *)a3, *((_QWORD *)a3 + 7));
      v24 = 2400LL * v15;
      *(_QWORD *)(*(_QWORD *)(v7 + 680) + v24 + 2260) = *((_QWORD *)a3 + 6);
      *(_QWORD *)(*(_QWORD *)(v7 + 680) + v24 + 2276) = *((_QWORD *)a3 + 8);
      *(_QWORD *)(*(_QWORD *)(v7 + 680) + v24 + 2284) = *(_QWORD *)((char *)v14 + 12);
    }
    else
    {
      ApplyTransforms(v7, (__int64)a3, v15, (unsigned int *)v14);
      PTPContactState = GetPointerDeviceContactState(
                          v28,
                          a2,
                          (int)a3,
                          v12,
                          v15,
                          a5,
                          (__int64)a6,
                          (__int64)v14,
                          (__int64)&v30);
      if ( !(_DWORD)v30 )
        DoPrediction(v7, (_DWORD)a3 + 8, (_DWORD)a3, v10, v15, (__int64)v14);
    }
  }
  else
  {
LABEL_25:
    PTPContactState = -1073741668;
  }
  if ( (unsigned int)IsFrameReportingPointerDevice(v7) && (PTPContactState == -1073741668 || !*((_DWORD *)a3 + 5)) )
  {
    v25 = (__int64 **)(*(_QWORD *)(*(_QWORD *)(v7 + 696) + 48LL)
                     + 8LL * (unsigned int)(*(_DWORD *)v14 % *(_DWORD *)(v7 + 704)));
    for ( i = *v25; i; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 2) == *(_DWORD *)v14 )
      {
        *v25 = (__int64 *)*i;
        Win32FreePool(i);
        return PTPContactState;
      }
      v25 = (__int64 **)i;
    }
  }
  return PTPContactState;
}
