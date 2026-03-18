/*
 * XREFs of ?AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C006A71C
 * Callers:
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C0093A20 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::AddSyncObject(union _LARGE_INTEGER *this, struct DXGADAPTERSYNCOBJECT *a2)
{
  DXGFASTMUTEX *v2; // rsi
  union _LARGE_INTEGER *v5; // rbx
  LONGLONG QuadPart; // rax

  v2 = (DXGFASTMUTEX *)&this[17];
  DXGFASTMUTEX::Acquire(this + 17);
  v5 = this + 25;
  QuadPart = v5->QuadPart;
  *(union _LARGE_INTEGER *)a2 = *v5;
  *((_QWORD *)a2 + 1) = v5;
  if ( *(union _LARGE_INTEGER **)(QuadPart + 8) != v5 )
    __fastfail(3u);
  *(_QWORD *)(QuadPart + 8) = a2;
  v5->QuadPart = (LONGLONG)a2;
  DXGFASTMUTEX::Release(v2);
}
