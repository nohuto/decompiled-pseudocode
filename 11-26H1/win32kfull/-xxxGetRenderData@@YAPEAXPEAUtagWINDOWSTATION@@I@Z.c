/*
 * XREFs of ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1401F71E0
 * Callers:
 *     xxxGetClipboardData @ 0x1401F7070 (xxxGetClipboardData.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x140057518 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3434@Z @ 0x1401F73C0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U2@U1@U2@@-$_tlgWriteTemplate@$$A6.c)
 */

void *__fastcall xxxGetRenderData(struct tagWINDOWSTATION *a1, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // edx
  struct tagCLIP *ClipFormat; // rax
  struct _KPROCESS *ThreadProcess; // rax
  __int64 v11; // rcx
  struct _KPROCESS *CurrentProcess; // rax
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // [rsp+50h] [rbp-30h] BYREF
  LONGLONG TimeQuadPart; // [rsp+58h] [rbp-28h] BYREF
  LONGLONG v18; // [rsp+60h] [rbp-20h] BYREF
  __int64 v19; // [rsp+68h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+70h] [rbp-10h] BYREF
  int v21; // [rsp+A0h] [rbp+20h] BYREF
  unsigned int ThreadProcessId; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int CurrentProcessId; // [rsp+B8h] [rbp+38h] BYREF

  v2 = a2;
  v4 = *((_QWORD *)a1 + 10);
  v19 = 0LL;
  if ( v4 )
  {
    if ( (unsigned int)dword_1403AAA30 > 5
      && (qword_1403AAA40 & 0x400000000000LL) != 0
      && (qword_1403AAA48 & 0x400000000000LL) == qword_1403AAA48 )
    {
      v16 = 0x1000000LL;
      v21 = v2;
      ThreadProcess = PsGetThreadProcess(**(PETHREAD **)(v4 + 16));
      TimeQuadPart = PsGetProcessCreateTimeQuadPart(ThreadProcess);
      ThreadProcessId = (unsigned int)PsGetThreadProcessId(**(PETHREAD **)(*((_QWORD *)a1 + 10) + 16LL));
      CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v11);
      v18 = PsGetProcessCreateTimeQuadPart(CurrentProcess);
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v13,
        (unsigned int)&unk_1403769AE,
        v14,
        v15,
        (__int64)&CurrentProcessId,
        (__int64)&v18,
        (__int64)&ThreadProcessId,
        (__int64)&TimeQuadPart,
        (__int64)&v21,
        (__int64)&v16);
    }
    v5 = *((_DWORD *)a1 + 8);
    *((_DWORD *)a1 + 8) = v5 | 0x80;
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, *((_QWORD *)a1 + 10));
    v6 = xxxSendTransformableMessageTimeout(
           *((struct tagTHREADINFO ***)a1 + 10),
           773LL,
           v2,
           0LL,
           0x42u,
           0x7530u,
           &v19,
           1u,
           0);
    v7 = *((_DWORD *)a1 + 8) | 0x40;
    if ( (v5 & 0x40) == 0 )
      v7 = *((_DWORD *)a1 + 8) & 0xFFFFFFBF;
    *((_DWORD *)a1 + 8) = v7 & 0xFFFFFF7F;
    if ( !v6 )
    {
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
      return 0LL;
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  ClipFormat = FindClipFormat((unsigned __int64)a1, v2, 1);
  if ( !ClipFormat )
    return 0LL;
  return (void *)*((_QWORD *)ClipFormat + 1);
}
