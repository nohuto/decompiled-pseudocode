/*
 * XREFs of ?GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEA_K@Z @ 0x140032300
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetClientReleaseEvent(CAudioDeviceGraph *this, DWORD a2, HANDLE *a3)
{
  char *v6; // rbp
  char v7; // r15
  int v8; // ebx
  signed int LastError; // eax
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int16 v12; // dx
  HANDLE CurrentProcess; // rax
  signed int v14; // eax
  HANDLE v15; // rax
  HANDLE TargetHandle; // [rsp+90h] [rbp+18h] BYREF
  HANDLE hObject; // [rsp+98h] [rbp+20h] BYREF

  TargetHandle = 0LL;
  hObject = 0LL;
  v6 = 0LL;
  v7 = 0;
  if ( !a3 )
  {
    v8 = -2147467261;
LABEL_54:
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0x1Cu,
        (__int64)&WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids,
        v8);
    }
    return (unsigned int)v8;
  }
  if ( !*((_QWORD *)this + 15) )
  {
    v8 = -2005139437;
    goto LABEL_54;
  }
  v8 = CoImpersonateClient();
  if ( v8 < 0 )
    goto LABEL_46;
  v6 = (char *)OpenProcess(0x40u, 0, a2);
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x16u,
      (__int64)&WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids);
  }
  if ( !v6 )
  {
    LastError = GetLastError();
    if ( LastError == 5 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          0x17u,
          (__int64)&WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids,
          5);
      }
      v7 = 1;
    }
    else if ( LastError > 0 )
    {
      v8 = (unsigned __int16)LastError | 0x80070000;
    }
    else
    {
      v8 = LastError;
    }
  }
  CoRevertToSelf();
  if ( v8 < 0 )
    goto LABEL_46;
  v10 = (*(__int64 (__fastcall **)(_QWORD, HANDLE *))(**((_QWORD **)this + 15) + 72LL))(*((_QWORD *)this + 15), a3);
  v8 = v10;
  if ( v10 >= 0 && *a3 )
  {
    v11 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      v12 = 24;
LABEL_31:
      WPP_SF_D(*(_QWORD *)(v11 + 16), v12, (__int64)&WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids, v10);
      v11 = *(_QWORD *)&WPP_GLOBAL_Control;
    }
  }
  else
  {
    v11 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      v12 = 25;
      goto LABEL_31;
    }
  }
  if ( v7 )
  {
    if ( (unsigned int *)v11 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v11 + 28) & 0x20000) != 0
      && *(_BYTE *)(v11 + 25) >= 4u )
    {
      WPP_SF_(*(_QWORD *)(v11 + 16), 0x1Au, (__int64)&WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids);
    }
    *a3 = 0LL;
  }
  CurrentProcess = GetCurrentProcess();
  if ( DuplicateHandle(CurrentProcess, *a3, v6, &TargetHandle, 0, 0, 2u) )
  {
    *a3 = TargetHandle;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0x1Bu,
        (__int64)&WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids,
        v8);
    }
  }
  else
  {
    v14 = GetLastError();
    v8 = v14;
    if ( v14 > 0 )
      v8 = (unsigned __int16)v14 | 0x80070000;
  }
  if ( v8 < 0 )
  {
LABEL_46:
    if ( TargetHandle )
    {
      v15 = GetCurrentProcess();
      if ( DuplicateHandle(v6, TargetHandle, v15, &hObject, 0, 0, 1u) )
      {
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        {
          CloseHandle(hObject);
          hObject = 0LL;
        }
        *a3 = 0LL;
      }
    }
  }
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  if ( v8 < 0 )
    goto LABEL_54;
  return (unsigned int)v8;
}
