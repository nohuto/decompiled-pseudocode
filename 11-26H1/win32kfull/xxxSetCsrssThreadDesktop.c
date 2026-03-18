/*
 * XREFs of xxxSetCsrssThreadDesktop @ 0x140056850
 * Callers:
 *     xxxSetInformationThread @ 0x1400569F0 (xxxSetInformationThread.c)
 *     xxxQueryInformationThread @ 0x1401535CC (xxxQueryInformationThread.c)
 *     xxxHardErrorControl @ 0x140244D3C (xxxHardErrorControl.c)
 * Callees:
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxInternalGetMessage @ 0x140057C40 (xxxInternalGetMessage.c)
 *     xxxSetThreadDesktop @ 0x1400595D4 (xxxSetThreadDesktop.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     CloseProtectedHandle @ 0x14018B5B0 (CloseProtectedHandle.c)
 */

NTSTATUS __fastcall xxxSetCsrssThreadDesktop(_DWORD *Object, PVOID *a2)
{
  struct tagTHREADINFO *v4; // rax
  struct tagTHREADINFO *v5; // r14
  NTSTATUS result; // eax
  void *v7; // rcx
  HANDLE *v8; // rsi
  NTSTATUS v9; // eax
  int v10; // ebx
  _DWORD *v11; // rax
  POBJECT_TYPE ObjectType; // [rsp+20h] [rbp-58h]
  POBJECT_TYPE ObjectTypea; // [rsp+20h] [rbp-58h]
  _OWORD v14[3]; // [rsp+40h] [rbp-38h] BYREF

  v4 = PtiCurrent((__int64)Object);
  v5 = v4;
  if ( (Object[12] & 8) != 0 )
    return -1073741823;
  v7 = (void *)*((_QWORD *)v4 + 61);
  *a2 = v7;
  if ( !v7 || (result = ObReferenceObjectByPointer(v7, 0x2000000u, (POBJECT_TYPE)ExDesktopObjectType, 0), result >= 0) )
  {
    v8 = a2 + 1;
    v9 = ObOpenObjectByPointer(Object, 0, 0LL, 0x1F0003u, 0LL, 0, a2 + 1);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = (_DWORD *)*((_QWORD *)v5 + 61);
      if ( Object != v11 )
      {
        if ( v11 )
        {
          LODWORD(ObjectType) = 3;
          memset(v14, 0, sizeof(v14));
          if ( (unsigned int)xxxInternalGetMessage((__int64)v14, (unsigned __int64)ObjectType, 0) )
          {
            do
            {
              xxxDispatchMessage((struct tagMSG *)v14);
              LODWORD(ObjectTypea) = 3;
            }
            while ( (unsigned int)xxxInternalGetMessage((__int64)v14, (unsigned __int64)ObjectTypea, 0) );
            v8 = a2 + 1;
          }
        }
        v10 = xxxSetThreadDesktop(0LL, Object);
        if ( v10 < 0 )
        {
          if ( *a2 )
            ObfDereferenceObject(*a2);
          CloseProtectedHandle(*v8);
        }
      }
    }
    else
    {
      SetLastNtError((unsigned int)v9);
      if ( *a2 )
        ObfDereferenceObject(*a2);
    }
    return v10;
  }
  return result;
}
