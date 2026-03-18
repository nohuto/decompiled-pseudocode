/*
 * XREFs of WmipProcessEvent @ 0x1403D1CFC
 * Callers:
 *     WmipSendGuidUpdateNotifications @ 0x1403D1AC8 (WmipSendGuidUpdateNotifications.c)
 *     WmipEventNotification @ 0x14049CDF8 (WmipEventNotification.c)
 *     WmipGenerateMofResourceNotification @ 0x140543820 (WmipGenerateMofResourceNotification.c)
 *     WmipGenerateBinaryMofNotification @ 0x14054471C (WmipGenerateBinaryMofNotification.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     ObReferenceObjectSafe @ 0x1400C8410 (ObReferenceObjectSafe.c)
 *     WmipWriteWnodeToObject @ 0x1400C8E10 (WmipWriteWnodeToObject.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     WmipUnreferenceEntry @ 0x1403D3420 (WmipUnreferenceEntry.c)
 *     WmipFindGEByGuid @ 0x1403D370C (WmipFindGEByGuid.c)
 *     WmipDereferenceEvent @ 0x14065DB8C (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14065DF34 (WmipIncludeStaticNames.c)
 */

__int64 __fastcall WmipProcessEvent(_DWORD *Src, __int64 a2, char a3)
{
  char v3; // bp
  _DWORD *v4; // rsi
  _DWORD *v5; // rdi
  _DWORD *v6; // rbx
  __int64 GEByGuid; // r13
  unsigned int v8; // r15d
  _QWORD *v10; // r12
  __int64 v11; // rbp
  void (__fastcall *v12)(_DWORD *, _QWORD); // rax
  __int64 v13; // rax
  char v15; // [rsp+88h] [rbp+10h]
  _DWORD *v17; // [rsp+98h] [rbp+20h]

  v15 = a2;
  v3 = a3;
  v4 = Src;
  if ( (Src[11] & 0x2000) == 0 )
  {
    v5 = 0LL;
    v6 = Src;
    v17 = 0LL;
LABEL_3:
    if ( (v6[11] & 0x80u) != 0 )
      v6 = (_DWORD *)WmipIncludeStaticNames(v6);
    LOBYTE(a2) = 1;
    GEByGuid = WmipFindGEByGuid(v6 + 6, a2);
    if ( GEByGuid )
    {
      v8 = 0;
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      v10 = *(_QWORD **)(GEByGuid + 40);
      if ( v10 != (_QWORD *)(GEByGuid + 40) )
      {
        do
        {
          v11 = (__int64)(v10 - 5);
          v10 = (_QWORD *)*v10;
          if ( ObReferenceObjectSafe(v11) )
          {
            if ( (*(_DWORD *)(v11 + 164) & 2) != 0 )
            {
              v12 = *(void (__fastcall **)(_DWORD *, _QWORD))(v11 + 72);
              if ( v12 )
                v12(v6, *(_QWORD *)(v11 + 80));
            }
            else if ( (int)WmipWriteWnodeToObject(v11, v6, v15) < 0 )
            {
              v8 = -1073741823;
            }
            ObfDereferenceObject((PVOID)v11);
          }
        }
        while ( v10 != (_QWORD *)(GEByGuid + 40) );
        v5 = v17;
        v4 = Src;
        v3 = a3;
      }
      KeReleaseMutex(&WmipSMMutex, 0);
      WmipUnreferenceEntry(&WmipGEChunkInfo, GEByGuid);
    }
    else
    {
      v8 = -1073741163;
    }
    if ( v3 )
      ExFreePoolWithTag(v4, 0);
    if ( v6 != v4 && v6 != v5 )
      ExFreePoolWithTag(v6, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    return v8;
  }
  v13 = WmipDereferenceEvent();
  v17 = (_DWORD *)v13;
  v5 = (_DWORD *)v13;
  if ( v13 )
  {
    v6 = (_DWORD *)v13;
    goto LABEL_3;
  }
  if ( v3 )
    ExFreePoolWithTag(v4, 0);
  return 3221225473LL;
}
