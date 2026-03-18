/*
 * XREFs of AlpcpExposeAttributes @ 0x14042C820
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1404069A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpProcessConnectionRequest @ 0x1404807A4 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     AlpcpGetMessageAttributeOffset32 @ 0x140423FF4 (AlpcpGetMessageAttributeOffset32.c)
 *     AlpcpExposeHandleAttribute @ 0x1404292E0 (AlpcpExposeHandleAttribute.c)
 *     AlpcpExposeTokenAttribute @ 0x14042B240 (AlpcpExposeTokenAttribute.c)
 *     AlpcpGetMessageAttributeOffset @ 0x14042C940 (AlpcpGetMessageAttributeOffset.c)
 *     AlpcpExposeContextAttribute @ 0x14042C9A0 (AlpcpExposeContextAttribute.c)
 *     AlpcpExposeContextAttribute32 @ 0x1404ABBB4 (AlpcpExposeContextAttribute32.c)
 *     AlpcpExposeViewAttribute @ 0x1404ABC0C (AlpcpExposeViewAttribute.c)
 */

__int64 __fastcall AlpcpExposeAttributes(__int64 a1, int a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  __int64 MessageAttributeOffset; // rax
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 MessageAttributeOffset32; // rax
  __int64 v14; // r9
  _DWORD *v15; // r15
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rax
  _DWORD *v20; // r15
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // [rsp+20h] [rbp-38h] BYREF
  int v27; // [rsp+28h] [rbp-30h]
  int v28; // [rsp+30h] [rbp-28h]
  int v29; // [rsp+34h] [rbp-24h]
  int v30; // [rsp+38h] [rbp-20h]

  v4 = *a4;
  a4[1] = 0;
  if ( a2 < 0 )
  {
    if ( (v4 & 0x80000000) != 0 )
    {
      MessageAttributeOffset32 = AlpcpGetMessageAttributeOffset32(v4, 0x80000000);
      if ( *(_QWORD *)(a3 + 136) != v14 )
      {
        *(unsigned int *)((char *)a4 + MessageAttributeOffset32) = v14;
        *(unsigned int *)((char *)a4 + MessageAttributeOffset32 + 8) = *(_DWORD *)(*(_QWORD *)(a3 + 136) + 8LL);
        a4[1] |= 0x80000000;
      }
    }
    if ( (v4 & 0x40000000) != 0 )
    {
      v15 = (unsigned int *)((char *)a4 + AlpcpGetMessageAttributeOffset32(v4, 0x40000000));
      if ( (int)AlpcpExposeViewAttribute(a1, a3, &v26, a4 + 1) >= 0 )
      {
        v16 = v28;
        *v15 = v26;
        v17 = v27;
        v15[2] = v16;
        v18 = v30;
        v15[1] = v17;
        v15[3] = v18;
      }
    }
    if ( (v4 & 0x20000000) != 0 )
    {
      v19 = AlpcpGetMessageAttributeOffset32(v4, 0x20000000);
      AlpcpExposeContextAttribute32(a1, a3, (char *)a4 + v19, a4 + 1);
    }
    if ( (v4 & 0x10000000) != 0 )
    {
      v20 = (unsigned int *)((char *)a4 + AlpcpGetMessageAttributeOffset32(v4, 0x10000000));
      if ( (int)AlpcpExposeHandleAttribute(a1, a3, (__int64)&v26, a4 + 1) >= 0 )
      {
        v21 = v28;
        *v20 = v26;
        v22 = v27;
        v20[2] = v21;
        v23 = v29;
        v20[1] = v22;
        v20[3] = v23;
      }
    }
    if ( (v4 & 0x8000000) != 0 )
    {
      v11 = AlpcpGetMessageAttributeOffset32(v4, 0x8000000);
      goto LABEL_13;
    }
  }
  else
  {
    if ( (v4 & 0x80000000) != 0 )
    {
      MessageAttributeOffset = AlpcpGetMessageAttributeOffset(v4, 0x80000000LL);
      if ( *(_QWORD *)(a3 + 136) != v9 )
      {
        *(unsigned int *)((char *)a4 + MessageAttributeOffset) = v9;
        *(_QWORD *)((char *)a4 + MessageAttributeOffset + 16) = *(_QWORD *)(*(_QWORD *)(a3 + 136) + 8LL);
        a4[1] |= 0x80000000;
      }
    }
    if ( (v4 & 0x40000000) != 0 )
    {
      v24 = AlpcpGetMessageAttributeOffset(v4, 0x40000000LL);
      AlpcpExposeViewAttribute(a1, a3, (char *)a4 + v24, a4 + 1);
    }
    if ( (v4 & 0x20000000) != 0 )
    {
      v10 = AlpcpGetMessageAttributeOffset(v4, 0x20000000LL);
      AlpcpExposeContextAttribute(a1, a3, (char *)a4 + v10, a4 + 1);
    }
    if ( (v4 & 0x10000000) != 0 )
    {
      v25 = AlpcpGetMessageAttributeOffset(v4, 0x10000000LL);
      AlpcpExposeHandleAttribute(a1, a3, (__int64)a4 + v25, a4 + 1);
    }
    if ( (v4 & 0x8000000) != 0 )
    {
      v11 = AlpcpGetMessageAttributeOffset(v4, 0x8000000LL);
LABEL_13:
      AlpcpExposeTokenAttribute(a1, a3, (PERESOURCE *)((char *)a4 + v11), a4 + 1);
    }
  }
  return 0LL;
}
