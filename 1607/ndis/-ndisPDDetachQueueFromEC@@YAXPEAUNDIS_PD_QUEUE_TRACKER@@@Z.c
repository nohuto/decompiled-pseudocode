/*
 * XREFs of ?ndisPDDetachQueueFromEC@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C00E04C4
 * Callers:
 *     ?NdisPDAttachQueueToEC@@YAXPEAU_NDIS_PD_QUEUE@@PEAUPD_EC_HANDLE__@@@Z @ 0x1C00DDFC0 (-NdisPDAttachQueueToEC@@YAXPEAU_NDIS_PD_QUEUE@@PEAUPD_EC_HANDLE__@@@Z.c)
 *     ?NdisPDDetachQueueFromEC@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00DE520 (-NdisPDDetachQueueFromEC@@YAXPEAU_NDIS_PD_QUEUE@@@Z.c)
 *     ?ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C00DFEB8 (-ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPDDetachQueueFromEC(_UNICODE_STRING *a1)
{
  __int64 v1; // rax
  _UNICODE_STRING *v3; // rbx
  __int64 v4; // rcx
  wchar_t *Buffer; // rax

  v1 = *(_QWORD *)&a1[17].Length;
  if ( v1 )
  {
    if ( *(_DWORD *)&a1[10].Length == 1 )
      --*(_DWORD *)(v1 + 80);
    else
      --*(_DWORD *)(v1 + 76);
    *(_QWORD *)&a1[17].Length = 0LL;
    *(_DWORD *)&a1[19].Length = 0;
    RtlFreeUnicodeString(a1 + 18);
    v3 = a1 + 16;
    v4 = *(_QWORD *)&v3->Length;
    Buffer = v3->Buffer;
    if ( *(_UNICODE_STRING **)(*(_QWORD *)&v3->Length + 8LL) != v3 || *(_UNICODE_STRING **)Buffer != v3 )
      __fastfail(3u);
    *(_QWORD *)Buffer = v4;
    *(_QWORD *)(v4 + 8) = Buffer;
    *(_QWORD *)&v3->Length = 0LL;
  }
}
