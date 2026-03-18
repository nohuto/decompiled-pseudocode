/*
 * XREFs of ?AssignEntry@HANDLE_TABLE@@QEAAJIK@Z @ 0x180038004
 * Callers:
 *     ?AllocateEntryAtHandle@CResourceTable@@IEAAJIW4MIL_RESOURCE_TYPE@@PEAPEAUHANDLE_ENTRY@1@@Z @ 0x18003AA78 (-AllocateEntryAtHandle@CResourceTable@@IEAAJIW4MIL_RESOURCE_TYPE@@PEAPEAUHANDLE_ENTRY@1@@Z.c)
 *     ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800A88A8 (-AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 * Callees:
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x180037FB4 (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall HANDLE_TABLE::AssignEntry(void **this, unsigned int a2, int a3)
{
  unsigned int v3; // ebx
  char *v7; // rax
  __int64 v8; // rcx
  int v10; // eax
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( !a3 || !a2 )
  {
    v11 = 400;
LABEL_11:
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v11);
    return v3;
  }
  if ( a2 >= *((_DWORD *)this + 3) )
  {
    v10 = HANDLE_TABLE::ResizeToFit(this, a2);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x19Du);
      return v3;
    }
  }
  v7 = (char *)this[3];
  v8 = a2 * *((_DWORD *)this + 2);
  if ( *(_DWORD *)&v7[v8] )
  {
    v11 = 428;
    goto LABEL_11;
  }
  *(_DWORD *)&v7[v8] = a3;
  return v3;
}
