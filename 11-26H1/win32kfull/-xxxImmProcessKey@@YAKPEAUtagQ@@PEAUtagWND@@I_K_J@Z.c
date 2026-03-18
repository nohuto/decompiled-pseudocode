/*
 * XREFs of ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x140277BB4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CheckImeHotKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAUtagQ@@I_J@Z @ 0x1401D8500 (-CheckImeHotKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAUtagQ@@I_J@Z.c)
 *     ClientImmProcessKey @ 0x1401EDBAC (ClientImmProcessKey.c)
 *     GetAppImeCompatFlags @ 0x1402081C0 (GetAppImeCompatFlags.c)
 *     Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline @ 0x1402A1AA8 (Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall xxxImmProcessKey(struct tagQ *a1, struct tagWND *a2, int a3, unsigned __int16 a4, __int64 a5)
{
  int v7; // edi
  __int64 v8; // rsi
  int v9; // ebx
  struct _tagIMEHOTKEYOBJ *v10; // rax
  int v11; // ebp
  __int64 v12; // r14
  bool v13; // zf
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  bool v17; // cc
  int v18; // ebx
  __int64 result; // rax
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // edx
  unsigned int v23; // ebx
  int AppImeCompatFlags; // ecx

  if ( ((a3 - 256) & 0xFFFFFFFA) != 0 )
    return 0LL;
  v7 = 0;
  v8 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 472LL);
  if ( !v8 )
    return 0LL;
  v9 = (unsigned __int8)a4;
  v10 = CheckImeHotKey(a1, (unsigned __int8)a4, a5);
  if ( v10 )
  {
    v11 = *((_DWORD *)v10 + 2);
    v12 = *((_QWORD *)v10 + 3);
  }
  else
  {
    v11 = -1;
    v12 = 0LL;
  }
  v13 = (unsigned int)Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline() == 0;
  v16 = v11 - 256;
  if ( v13 )
  {
    v17 = v16 <= 0x1F;
  }
  else
  {
    if ( v16 <= 0x1F )
      goto LABEL_11;
    v17 = (unsigned int)(v11 - 67175425) <= 0xFBFDFBFF;
  }
  if ( v17 )
  {
LABEL_11:
    if ( *(_QWORD *)(v8 + 40) != v12 )
    {
      v18 = *(_DWORD *)(v8 + 64);
      LOBYTE(v7) = (v18 & *(_DWORD *)(W32GetUserSessionState(v15, v14) + 66080)) != 0;
      PostMessage((int)a2, 80, v7, v12);
    }
    return (GetAppImeCompatFlags(*((struct tagTHREADINFO **)a2 + 2)) & 0x800000) == 0;
  }
  v20 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 19904);
  if ( (*(_DWORD *)v20 & 4) == 0 )
    return 0LL;
  if ( v11 == -1 )
  {
    if ( !*(_QWORD *)(v8 + 80)
      || !_HMObjectFromHandle(*(_QWORD *)(*((_QWORD *)a2 + 5) + 208LL))
      || (a5 & 0x80000000) != 0 && (*(_DWORD *)(*(_QWORD *)(v8 + 80) + 12LL) & 4) != 0 )
    {
      return 0LL;
    }
    if ( (unsigned int)(v9 - 241) > 0xA || (v21 = 1779, v22 = 1, !_bittest(&v21, v9 - 241)) )
      v22 = 0;
    if ( (unsigned int)(a3 - 260) <= 1 && v9 != 18 && v9 != 121 && !v22 )
      return 0LL;
    v20 = *(unsigned int *)(*(_QWORD *)(v8 + 80) + 12LL);
    if ( (v20 & 8) == 0 && !v22 && (v9 == 18 || (a5 & 0x20000000) != 0) )
      return 0LL;
  }
  if ( v9 == 231 )
    v9 = a4 | (*((unsigned __int16 *)PtiCurrent(v20) + 457) << 16);
  v23 = ClientImmProcessKey(*(_QWORD *)a2, *(_QWORD *)(v8 + 40), v9, a5, v11);
  AppImeCompatFlags = GetAppImeCompatFlags(*((struct tagTHREADINFO **)a2 + 2));
  result = v23 & 0xFFFFFFFE;
  if ( (AppImeCompatFlags & 0x800000) == 0 )
    return v23;
  return result;
}
