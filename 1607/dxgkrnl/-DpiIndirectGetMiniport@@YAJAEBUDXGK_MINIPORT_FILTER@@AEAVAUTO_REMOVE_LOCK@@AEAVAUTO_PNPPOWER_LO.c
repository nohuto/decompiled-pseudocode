/*
 * XREFs of ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C019A944
 * Callers:
 *     ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C019A570 (-DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x1C019B27C (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ??0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z @ 0x1C000EB0C (--0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1C0029C70 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x1C002F45C (--0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C002F5F0 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C002F614 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C002F660 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     DpiGetDeviceInstanceId @ 0x1C0196658 (DpiGetDeviceInstanceId.c)
 */

__int64 __fastcall DpiIndirectGetMiniport(
        const struct DXGK_MINIPORT_FILTER *a1,
        PVOID *a2,
        struct AUTO_PNPPOWER_LOCK *a3,
        struct _FDO_CONTEXT **a4)
{
  int DeviceInstanceId; // esi
  __int64 v7; // r14
  char v8; // r13
  _QWORD *v9; // rbx
  _QWORD *i; // rdi
  AUTO_PNPPOWER_LOCK *v11; // rbx
  struct _DEVICE_OBJECT *v12; // rcx
  _BYTE v14[8]; // [rsp+30h] [rbp-40h] BYREF
  PCWSTR SourceString; // [rsp+38h] [rbp-38h] BYREF
  PVOID v16; // [rsp+40h] [rbp-30h] BYREF
  char v17; // [rsp+48h] [rbp-28h]
  _BYTE v18[16]; // [rsp+50h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF

  DeviceInstanceId = 0;
  MINIPORT_LIST_AUTO_LOCK::MINIPORT_LIST_AUTO_LOCK((MINIPORT_LIST_AUTO_LOCK *)v14);
  v7 = qword_1C0056EB8;
  v8 = 0;
  if ( (__int64 *)qword_1C0056EB8 == &qword_1C0056EB8 )
    goto LABEL_31;
  do
  {
    if ( *((_BYTE *)a1 + 4) || *(_BYTE *)(v7 + 134) )
    {
      KeWaitForSingleObject((PVOID)(v7 + 72), Executive, 0, 0, 0LL);
      v9 = (_QWORD *)(v7 + 56);
      for ( i = *(_QWORD **)(v7 + 56); i != v9; i = (_QWORD *)*i )
      {
        if ( i && *((_DWORD *)i + 4) == 1953656900 && *((_DWORD *)i + 5) == 2 )
        {
          v16 = i;
          AUTO_REMOVE_LOCK::Release(a2);
          DeviceInstanceId = 0;
          *a2 = i;
          *((_BYTE *)a2 + 8) = 0;
          v17 = 0;
          AUTO_REMOVE_LOCK::Release(&v16);
          if ( !*((_BYTE *)a2 + 8) )
          {
            DeviceInstanceId = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)*a2 + 2, *a2, &File, 1u, 0x20u);
            if ( DeviceInstanceId >= 0 )
              *((_BYTE *)a2 + 8) = 1;
          }
          if ( DeviceInstanceId >= 0 )
          {
            v11 = AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK((AUTO_PNPPOWER_LOCK *)v18, (struct _COMMON_PNP_CONTEXT *)i);
            AUTO_PNPPOWER_LOCK::Release(a3);
            *(_QWORD *)a3 = *(_QWORD *)v11;
            *((_BYTE *)a3 + 8) = *((_BYTE *)v11 + 8);
            *((_BYTE *)a3 + 9) = *((_BYTE *)v11 + 9);
            *((_BYTE *)a3 + 10) = *((_BYTE *)v11 + 10);
            *((_BYTE *)v11 + 10) = 0;
            AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)v18);
            if ( *(_DWORD *)a1 == 1 )
            {
              if ( *((_DWORD *)i + 634) == *((_DWORD *)a1 + 2) && *((_DWORD *)i + 635) == *((_DWORD *)a1 + 3) )
              {
                v8 = 1;
                *a4 = (struct _FDO_CONTEXT *)i;
                break;
              }
            }
            else if ( !*(_DWORD *)a1 )
            {
              v12 = (struct _DEVICE_OBJECT *)i[19];
              SourceString = 0LL;
              DeviceInstanceId = DpiGetDeviceInstanceId(v12, (ULONG_PTR *)&SourceString);
              if ( DeviceInstanceId < 0 )
                goto LABEL_25;
              RtlInitUnicodeString(&DestinationString, SourceString);
              if ( !RtlCompareUnicodeString(&DestinationString, *((PCUNICODE_STRING *)a1 + 1), 1u) )
              {
                v8 = 1;
                *a4 = (struct _FDO_CONTEXT *)i;
LABEL_25:
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&SourceString);
                break;
              }
              AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&SourceString);
            }
            AUTO_PNPPOWER_LOCK::Release(a3);
            v9 = (_QWORD *)(v7 + 56);
          }
          else
          {
            DeviceInstanceId = 0;
          }
        }
      }
      KeReleaseMutex((PRKMUTEX)(v7 + 72), 0);
    }
    if ( DeviceInstanceId < 0 )
      break;
    v7 = *(_QWORD *)v7;
  }
  while ( (__int64 *)v7 != &qword_1C0056EB8 );
  if ( !v8 && DeviceInstanceId >= 0 )
LABEL_31:
    DeviceInstanceId = -1073741275;
  if ( v14[0] )
    ReleaseMiniportListMutex();
  return (unsigned int)DeviceInstanceId;
}
