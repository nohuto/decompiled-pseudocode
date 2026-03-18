/*
 * XREFs of ?_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z @ 0x1C008DC60
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C008D164 (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 */

void __fastcall FxUsbPipeContinuousReader::_FxUsbPipeRequestWorkItemThunk(
        FxUsbPipeRepeatReader *Context,
        __int64 a2,
        unsigned __int8 a3)
{
  FxUsbPipeContinuousReader *Parent; // rbx
  FxUsbPipeRepeatReader *m_WorkItemRerunContext; // rbp
  FxNonPagedObject *m_Pipe; // rsi
  unsigned __int8 v6; // r8
  unsigned int m_WorkItemFlags; // eax
  char v8; // di
  int v9; // eax
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // eax
  char v16; // di
  unsigned __int8 v17; // dl
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  Parent = Context->Parent;
  m_WorkItemRerunContext = Context;
  m_Pipe = Parent->m_Pipe;
  FxNonPagedObject::Lock(m_Pipe, &irql, a3);
  m_WorkItemFlags = Parent->m_WorkItemFlags;
  if ( (m_WorkItemFlags & 1) != 0 )
  {
    v8 = 1;
    Parent->m_WorkItemRerunContext = m_WorkItemRerunContext;
    v9 = m_WorkItemFlags | 2;
  }
  else
  {
    v8 = 0;
    v9 = m_WorkItemFlags | 1;
  }
  v10 = irql;
  Parent->m_WorkItemFlags = v9;
  FxNonPagedObject::Unlock(m_Pipe, v10, v6);
  if ( !v8 )
  {
    do
    {
      FxUsbPipeContinuousReader::FxUsbPipeRequestWorkItemHandler(Parent, m_WorkItemRerunContext, v11);
      FxNonPagedObject::Lock(m_Pipe, &irql, v12);
      v14 = Parent->m_WorkItemFlags;
      if ( (v14 & 2) != 0 )
      {
        m_WorkItemRerunContext = (FxUsbPipeRepeatReader *)Parent->m_WorkItemRerunContext;
        v15 = v14 & 0xFFFFFFFD;
        Parent->m_WorkItemRerunContext = 0LL;
        v16 = 1;
      }
      else
      {
        v16 = 0;
        v15 = v14 & 0xFFFFFFFE;
      }
      v17 = irql;
      Parent->m_WorkItemFlags = v15;
      FxNonPagedObject::Unlock(m_Pipe, v17, v13);
    }
    while ( v16 );
  }
}
