/*
 * XREFs of VidSchIsVSyncEnabled @ 0x1C00425E0
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0002180 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSendToExecutionQueue @ 0x1C00077C0 (VidSchiSendToExecutionQueue.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0043780 (VidSchiSubmitCommandPacketToQueue.c)
 * Callees:
 *     VidSchiControlVSync @ 0x1C00426E0 (VidSchiControlVSync.c)
 */

char __fastcall VidSchIsVSyncEnabled(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  struct _ERESOURCE *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // si
  int v8; // eax
  char v9; // bp
  __int64 v10; // rdx
  int v11; // ebp
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = (unsigned int)a2;
  if ( a1 )
  {
    if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 40) )
    {
      v14 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v14 + 24) = v2;
      WdLogEvent5_WdAssertion(v14);
      return 0;
    }
    else
    {
      v4 = (struct _ERESOURCE *)(a1 + 1232);
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1232), 1u);
      v7 = 0;
      if ( (unsigned int)v2 >= *(_DWORD *)(a1 + 40) )
      {
        v15 = WdLogNewEntry5_WdAssertion(v6, v5);
        *(_QWORD *)(v15 + 24) = v2;
        WdLogEvent5_WdAssertion(v15);
      }
      else
      {
        ExAcquireResourceExclusiveLite(v4, 1u);
        v8 = *(_DWORD *)(a1 + 1956);
        if ( _bittest(&v8, v2) )
          v9 = 1;
        else
          v9 = 0;
        ExReleaseResourceLite(v4);
        if ( v9 )
        {
          ExAcquireResourceExclusiveLite(v4, 1u);
          v11 = *(unsigned __int8 *)(a1 + 1960);
          if ( (_BYTE)v11 )
          {
            if ( *(_DWORD *)(a1 + 1940) )
            {
              LOBYTE(v10) = 1;
              VidSchiControlVSync(a1, v10, 65539LL);
            }
            else
            {
              *(_BYTE *)(a1 + 1960) = 0;
            }
          }
          v7 = *(_BYTE *)(a1 + 1936);
          if ( v7 )
          {
            if ( !v11 )
              _InterlockedExchange((volatile __int32 *)(a1 + 2004), 1);
          }
          ExReleaseResourceLite(v4);
        }
      }
      ExReleaseResourceLite(v4);
      return v7;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v13);
    return 0;
  }
}
