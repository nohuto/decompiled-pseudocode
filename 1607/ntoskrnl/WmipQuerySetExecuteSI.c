/*
 * XREFs of WmipQuerySetExecuteSI @ 0x14052B10C
 * Callers:
 *     WmipIoControl @ 0x140473894 (WmipIoControl.c)
 *     IoWMIQuerySingleInstance @ 0x140547554 (IoWMIQuerySingleInstance.c)
 *     IoWMIExecuteMethod @ 0x14069CAD0 (IoWMIExecuteMethod.c)
 *     IoWMISetSingleInstance @ 0x14069CDD4 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x14069CEDC (IoWMISetSingleItem.c)
 *     WmipQuerySingleMultiple @ 0x14069E90C (WmipQuerySingleMultiple.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x14007F7E0 (ObReferenceObjectByPointer.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     WmipUnreferenceEntry @ 0x1404E8014 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x1404E80DC (WmipForwardWmiIrp.c)
 *     WmipPrepareWnodeSI @ 0x14052B370 (WmipPrepareWnodeSI.c)
 *     WmipSendWmiIrp @ 0x140549C18 (WmipSendWmiIrp.c)
 */

__int64 __fastcall WmipQuerySetExecuteSI(
        void *a1,
        IRP *a2,
        KPROCESSOR_MODE a3,
        UCHAR a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // r12
  PVOID v10; // r14
  ACCESS_MASK v11; // edx
  NTSTATUS v12; // eax
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // r13
  volatile signed __int64 **v17; // r14
  volatile signed __int64 *v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  volatile signed __int64 **v21; // rsi
  __int64 v22; // r15
  IO_STATUS_BLOCK *p_IoStatus; // r13
  int v25; // eax
  char v26; // [rsp+30h] [rbp-C1h] BYREF
  char v27[7]; // [rsp+31h] [rbp-C0h] BYREF
  PVOID P; // [rsp+38h] [rbp-B9h] BYREF
  unsigned int v29; // [rsp+40h] [rbp-B1h] BYREF
  PVOID v30; // [rsp+48h] [rbp-A9h]
  unsigned int *v31; // [rsp+50h] [rbp-A1h]
  _BYTE v32[24]; // [rsp+58h] [rbp-99h] BYREF
  _BYTE v33[128]; // [rsp+70h] [rbp-81h] BYREF

  v7 = a7;
  v30 = a1;
  v10 = a1;
  v31 = a7;
  v11 = *((_DWORD *)DesiredAccessForFunction + a4);
  if ( a1 )
  {
    v12 = ObReferenceObjectByPointer(a1, v11, WmipGuidObjectType, a3);
  }
  else
  {
    v12 = ObReferenceObjectByHandle(*(HANDLE *)(a5 + 16), v11, WmipGuidObjectType, a3, &P, 0LL);
    v10 = P;
    v30 = P;
  }
  v13 = v12;
  if ( v12 < 0 )
    return (unsigned int)v13;
  v29 = 16;
  P = v33;
  v13 = WmipPrepareWnodeSI((_DWORD)v10, a5, (unsigned int)&v29, (unsigned int)&P, (__int64)v27, (__int64)&v26);
  if ( v13 >= 0 )
  {
    if ( v26 )
    {
      *(_DWORD *)(a5 + 44) |= 0x100u;
      *(_DWORD *)a5 = 48;
      a2->IoStatus.Information = 48LL;
    }
    else if ( v27[0] )
    {
      if ( a4 == 3 || (v13 = -1073741162, a4 == 9) )
        v13 = -1073741161;
      v15 = v29;
      v16 = 0LL;
      v17 = (volatile signed __int64 **)P;
      if ( v29 )
      {
        while ( 1 )
        {
          v18 = v17[v16];
          v19 = *((unsigned int *)v18 + 20);
          *(_DWORD *)(a5 + 4) = v19;
          if ( a2 )
          {
            P = &a2->IoStatus;
            v20 = WmipForwardWmiIrp(a2, a4, v19, (UNICODE_STRING *)(a5 + 24), a6, a5);
          }
          else
          {
            P = v32;
            LOBYTE(v18) = a4;
            v20 = WmipSendWmiIrp(v18, v19, a5 + 24, a6, a5, v32);
          }
          if ( v20 >= 0 )
            *v31 = *((_DWORD *)P + 2);
          if ( (unsigned int)(v20 + 1073741163) > 1 )
            break;
          v16 = (unsigned int)(v16 + 1);
          if ( (unsigned int)v16 >= (unsigned int)v15 )
            goto LABEL_17;
        }
        v13 = v20;
LABEL_17:
        if ( (_DWORD)v15 )
        {
          v21 = v17;
          v22 = v15;
          do
          {
            WmipUnreferenceEntry((__int64)&WmipISChunkInfo, *v21++);
            --v22;
          }
          while ( v22 );
        }
      }
      if ( v17 != (volatile signed __int64 **)v33 && v17 )
        ExFreePoolWithTag(v17, 0);
      v10 = v30;
      v7 = v31;
    }
    else
    {
      if ( a2 )
      {
        p_IoStatus = &a2->IoStatus;
        v25 = WmipForwardWmiIrp(a2, a4, *(_DWORD *)(a5 + 4), (UNICODE_STRING *)(a5 + 24), a6, a5);
      }
      else
      {
        p_IoStatus = (IO_STATUS_BLOCK *)v32;
        LOBYTE(v14) = a4;
        v25 = WmipSendWmiIrp(v14, *(unsigned int *)(a5 + 4), a5 + 24, a6, a5, v32);
      }
      v13 = v25;
      if ( v25 < 0 )
      {
LABEL_25:
        *(_DWORD *)(a5 + 4) = 0;
        goto LABEL_26;
      }
      *a7 = p_IoStatus->Information;
    }
    if ( v13 >= 0 && *v7 > a6 )
      v13 = -1073741811;
    goto LABEL_25;
  }
LABEL_26:
  if ( v10 )
    ObfDereferenceObject(v10);
  return (unsigned int)v13;
}
